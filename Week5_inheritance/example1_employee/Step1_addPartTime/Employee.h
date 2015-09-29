#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
#include<string>

using namespace std;
class Employee {

private:
  string name_;
  string job_title_;
  int day_of_service_;  // unable variable for part-time job
  int salary_day_;      // unable variable for part-time job
public:
  Employee(string name);
  Employee(string name, string title);
  virtual void doWork();
  virtual void goVacation();    // part-timer can not go vacation.
  void receiveSalary();
  virtual int calculateSalary();

};
#endif
