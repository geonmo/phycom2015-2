#include<iostream>
#include"UOSAbs.h"  // 같은 디렉토리에 있을 경우

int main()
{
  float a = 3.02;
  float b = -22.21;
  
  std::cout<<UOS::abs(a)<<std::endl;
  std::cout<<UOS::abs(b)<<std::endl;
  
  return 0;
}

namespace UOS {
  float abs( float arg) {
    if ( arg>=0. ) return arg;
    else return -arg;
  }
}
