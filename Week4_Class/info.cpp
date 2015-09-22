#include<iostream>
#include"student.h"

int main(int argc, char* argv[])
{
  Student cheolsu(550001, "철수", "근처", 97);
  Student younghee(550002, "영희", "먼곳", 100);
 
  std::vector<Student> stu_list;
  stu_list.push_back( cheolsu);
  stu_list.push_back( younghee);
  stu_list.push_back( Student(550003, "만수","어중간한 곳", 87));


  for( std::vector<Student>::const_iterator it = stu_list.begin() ; it != stu_list.end() ; ++it) {
    std::cout<<"Name : "<< it->getName() << " Address : "<<it->getAddress()<<" Score : "<<it->getScore()<<std::endl;
    
  } 


  return 0;
}
