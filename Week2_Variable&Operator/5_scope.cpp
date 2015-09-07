#include<iostream>

int main()
{

  int a = 42;
  {
    int b = 37;
    std::cout<<a<<std::endl;
    std::cout<<b<<std::endl;
  }
  std::cout<<a<<std::endl;
  //std::cout<<b<<std::endl;   // b가 존재 X
  return 0;
}
