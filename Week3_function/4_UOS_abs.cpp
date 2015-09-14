#include<iostream>

namespace UOS {
  float abs( float arg) {
    if ( arg>=0. ) return arg;
    else return -arg;
  }
}


int main()
{
  float a = 3.02;
  float b = -22.21;
  
  std::cout<<UOS::abs(a)<<std::endl;
  std::cout<<UOS::abs(b)<<std::endl;
  
  return 0;
}
