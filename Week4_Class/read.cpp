#include<iostream>
#include<fstream>  // 잊어먹지 말자!

class Commodity {
private :
  int id_;
  std::string name_;
  int price_;
public :
  Commodity() {
    id_ = 0;
    name_ = std::string("");
    price_ = 0;
  }
  Commodity(int id, std::string name, int price) {
    id_ = id;
    name_ = name ;
    price_ = price;
  }
  ~Commodity(){}
void  saveFile(std::string filename) {
    std::ofstream output( filename.c_str(), std::ios::app);
    output<<id_<<" "<<name_<<" "<<price_<<std::endl;
    output.close();
    return ;
  }



};


int main()
{

  int co_id;
  std::string co_name;
  int co_price;
  std::ifstream commodity("commodity.txt");
  while( commodity>>co_id>>co_name>>co_price) {
    std::cout<<co_id<<" "<<co_name<<" "<<co_price<<std::endl;
    Commodity co( co_id, co_name, co_price);
    if ( co_id == 880001) {
      co.saveFile("output.txt");
    }
  }




  return 0;
}
  
  
