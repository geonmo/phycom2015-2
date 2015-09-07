#include<iostream>

int main()
{
  float a=1.050000f;
  float b= a*100.0f;
  std::cout<<(int)b<<std::endl; // float->int로 강제 변환(소수 버림). 당연히 105라고 생각하겠지만,


  return 0;
}
