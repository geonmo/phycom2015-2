#include<iostream>
#include<vector>
#include"Employee.h"
#include"PartTime.h"

int main(){

  // Test suite3. 
  vector<Employee*> em_list;
  Employee em1("박철수","경리");
  PartTime em2("한영희",6000);
  em_list.push_back(&em1);
  em_list.push_back(&em2);
  em_list[0]->doWork();
  em_list[0]->doWork();
  em_list[0]->doWork();
  em_list[0]->goVacation();
  em_list[0]->receiveSalary();

  PartTime* em3 = dynamic_cast<PartTime*>(em_list[1]);
  em3->doWork();
  em3->doWork();
  em3->doWork();
  em3->doWork(4);
  em3->goVacation();
  em3->receiveSalary();

  return 0;

}
