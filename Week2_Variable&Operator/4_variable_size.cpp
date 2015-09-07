#include<iostream>
#include<stdint.h>
int main()
{

  // 선언(Declare) 부분
  char character;
  int integer;
  int64_t bigInt;
  float floating_single;
  double floating_double;

  //// Pointer 타입들! 
  int* intPointer;
  double* floatPointer;


  // 정의(Define) 부분
  character = 'a';
  integer = 64;
  bigInt = 64;
  floating_single = 42.4f;
  floating_double = 42.44322233522341;

  
  
  std::cout<<character<<" "<< integer<<" "<<floating_single<<" "<<floating_double<<std::endl;
  std::cout<<sizeof(character)<<" "<<sizeof(integer)<<" "<<sizeof(floating_single)<<" "<<sizeof(floating_double)<<std::endl;
  std::cout<<sizeof(intPointer)<<" "<<sizeof(floatPointer)<<std::endl;

  std::cout<<"sizeof(int64_t) : "<<sizeof(bigInt)<<std::endl; 

  return 0;     // 정상종료

}
