#include<iostream>
#include"Employee.h"
int main(){

  // Test suite1. 
  Employee em1("박철수","경리");
  em1.doWork();
  em1.doWork();
  em1.doWork();
  em1.doWork();
  em1.goVacation();
  em1.receiveSalary();
  return 0;

}
