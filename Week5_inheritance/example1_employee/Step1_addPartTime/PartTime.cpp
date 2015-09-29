#include"PartTime.h"
#include<iostream>

using namespace std;

PartTime::PartTime(string name, int pay_per_hour) : Employee(name) {
  time_of_service_ = 0;
  salary_time_ = 0;
  pay_per_hour_ = pay_per_hour;
}

void PartTime::doWork() {
  doWork(8);
}
 
void PartTime::doWork(int hour) {
  std::cout<<"아르바이트 업무를 "<<hour<<"시간 만큼 진행합니다."<<std::endl;  
  std::cout<<"아르바이트 업무를 종료합니다."<<std::endl;  
  time_of_service_ = time_of_service_ + hour;
  salary_time_ = salary_time_ + hour; 
}

int PartTime::calculateSalary() {
  int salary;
  salary = salary_time_ * pay_per_hour_;
  return salary;
}
