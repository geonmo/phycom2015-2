#ifndef __PARTTIME__
#define __PARTIME__
#include"Employee.h"
#include<iostream>
using namespace std;
class PartTime : public Employee{

private : 
  int time_of_service_;
  int pay_per_hour_;
  int salary_time_;
public : 
  PartTime(string name, int pay_per_hour);
  void doWork();
  void doWork(int hour);
  void goVacation(){ cout<<"아르바이트생은 유상휴가가 존재하지 않습니다."<<endl; }
  int calculateSalary();
};
#endif
