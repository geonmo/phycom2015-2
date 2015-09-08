#include<iostream>

int main()
{
  unsigned int age = 0;
  std::cout<<"Please, input your age :";
  std::cin>>age;
  if ( age >= 8 && age <=13) {
    std::cout<<"You are a elementary school."<<std::endl;
  }
  else {
    std::cout<<"Wow!"<<std::endl;
  }
  return 0;

}
