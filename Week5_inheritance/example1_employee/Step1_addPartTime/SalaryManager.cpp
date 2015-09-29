#include<iostream>
#include<vector>
#include"Employee.h"
#include"PartTime.h"

int main(){

  // Test suite2. 
  vector<Employee*> em_list;
  Employee em1("박철수","경리");
  PartTime em2("한영희",6000);
  em1.doWork();
  em1.doWork();
  em1.doWork();
  em1.goVacation();
  em1.receiveSalary();

  em2.doWork();
  em2.doWork();
  em2.doWork();
  em2.doWork(4);
  em2.goVacation();
  em2.receiveSalary();

  return 0;

}
