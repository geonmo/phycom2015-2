#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Vector {
	public :
	double x;
	double y;
	Vector(double _x, double _y) { x = _x; y = _y; }
};

class Point {
	private :
	
	public :
	int x;
	int y;
	Point() {
		x = -1;
		y = -1;
	}
	Point( int _x, int _y) {
		x = _x;
		y = _y;
	}
	Point getPoint() {
		return Point(x, y);
	}	
};

class PointCharge : public Point{
	
	private :
	double charge_;
	public :
	PointCharge( int x, int y, double charge): Point(x, y) {
		charge_ = charge;
	}
	PointCharge():Point() {
		charge_ = 0.0;
	}
	PointCharge(int x, int y):Point(x,y) {
	}
	PointCharge getPointCharge() {
		return PointCharge(x,y,charge_);
	}	
	double getCharge() {
		return charge_;
	}
	void printPointCharge() {
		std::cout<<" x: "<<x <<" y : "<<y<<" charge : "<<charge_<<endl;
	}
};

class EField {

public :
	EField() { 		k = 1000; 	}
	EField(double _k) { 		k = _k; 	}
	void printEField() {
		for( int x=0; x<10; x++) {
			for( int y=0 ; y<10 ; y++) {
				Vector efield = calEField(x,y);
				cout<<x<<" "<<y<<" "<<efield.x<<" "<<efield.y<<std::endl;
			}
		}
	}

	void printPointCharges() {
		vector<PointCharge>::iterator it_pc;
		for( it_pc = pc_list.begin() ; it_pc != pc_list.end() ; it_pc++){
			it_pc->printPointCharge();
		}
	}	
		
	Vector calEField(int x, int y) {
		Vector efield(0,0);
		vector<PointCharge>::iterator it_pc;
		for( it_pc = pc_list.begin() ; it_pc != pc_list.end() ; it_pc++){
			Point pc = it_pc->getPoint();
			double dx = x- pc.x;
			double dy = y- pc.y;
			double distance_R = sqrt( dx*dx + dy*dy );
			double Ex = k* it_pc->getCharge() / (distance_R*distance_R)*dx/distance_R;
			double Ey = k* it_pc->getCharge() / (distance_R*distance_R)*dy/distance_R;
			efield.x = efield.x+Ex;
			efield.y = efield.y+Ey;	
		}
		return efield;
	}

	void addPointCharge( PointCharge pc ) {
		pc_list.push_back( pc) ;
	}
	void addPointCharge( int x, int y, double charge ) {
		pc_list.push_back( PointCharge(x,y,charge) ) ;
	}

private:
	vector<PointCharge> pc_list;
	double k;
	//double e_vector[100][100];

};
