#include<iostream>

// std::abs와 구분을 하기 위하여 namespace로 구분해줌.
namespace UOS{
  float abs(float arg);
}

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
