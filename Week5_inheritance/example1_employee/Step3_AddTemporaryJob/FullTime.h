#ifndef __FULLTIME__
#define __FULLTIME__
#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;
class FullTime :public Employee{

private:
  int day_of_service_;  
  int salary_day_;      
public:
  FullTime(string name);
  FullTime(string name, string title);
  virtual void doWork();
  virtual void goVacation()=0;    // Difference between permanent and temporary
  virtual int calculateSalary();
  int getDayOfService(){return day_of_service_; }
  int getSalaryDay(){ return salary_day_ ; }
  void setDayOfService(int day_of_service) { day_of_service_ = day_of_service; }
  void setSalaryDay(int salary_day ) { salary_day_ = salary_day; }
};
#endif
