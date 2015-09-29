#ifndef __EMPLOYEE__
#define __EMPLOYEE__
#include<iostream>
#include<string>

using namespace std;
class Employee {

private:
  string name_;
  string job_title_;
public:
  Employee(string name);
  Employee(string name, string title);
  virtual void doWork()=0;
  virtual void goVacation()=0;
  void receiveSalary();
  virtual int calculateSalary()=0;
  virtual string getJobTitle(){ return job_title_;}
};
#endif
