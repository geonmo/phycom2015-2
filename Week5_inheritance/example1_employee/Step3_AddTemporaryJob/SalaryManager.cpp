#include<iostream>
#include<vector>
#include"PartTime.h"
#include"Permanent.h"
#include"Temporary.h"
#include<typeinfo>
#include<cstdio>
int main(){

  // Test suite3. 
  vector<Employee*> em_list;
  Permanent em1("박철수","경리");
  PartTime* em2 = new PartTime("한영희",6000);
  Temporary em3("김민수","영업");
  em_list.push_back(&em1);
  em_list.push_back(em2);
  em_list.push_back(&em3);
  em_list[0]->doWork();
  em_list[0]->doWork();
  em_list[0]->doWork();
  em_list[0]->goVacation();
  em_list[0]->receiveSalary();
  PartTime* em_part;
  // Compare between PartTime class and em_list[1]'s contents.  em_list[1] == Employee,  *em_list[1] == PartTime  
  if( typeid( PartTime ) == typeid(*em_list[1])) {
    //std::cout<<"em_list[1] is a PartTime class's instance"<<std::endl;
    em_part = dynamic_cast<PartTime*>(em_list[1]);
  }
  em_part->doWork();
  em_part->doWork();
  em_part->doWork();
  em_part->doWork(4);
  em_part->goVacation();
  em_part->receiveSalary();

  em_list[2]->doWork();
  em_list[2]->doWork();
  em_list[2]->doWork();
  em_list[2]->goVacation();
  em_list[2]->receiveSalary();
  
  delete em2;

  return 0;

}
