#include<iostream>

int swap( int a, int b ) {
  std::cout<<"In swap ) a : "<<a<<" b : "<<b<<std::endl;
  int tmp = a;
  a = b;
  b = tmp;
  std::cout<<"In swap ) a : "<<a<<" b : "<<b<<std::endl;
  return 0 ;   // Normally terminated.
}

int pointer_swap( int* pa, int* pb) { 
  std::cout<<"In pointer_swap ) a : "<<*pa<<" b : "<<*pb<<std::endl;
  int tmp = *pa;
  *pa = *pb;
  *pb = tmp;
  std::cout<<"In pointer_swap ) a : "<<*pa<<" b : "<<*pb<<std::endl;
  return 0 ;
} 


int main()
{
  int a=32, b= 48;


  std::cout<<"In Main ) a : "<<a<<" b : "<<b<<std::endl;
  swap(a,b);
  std::cout<<"In Main ) a : "<<a<<" b : "<<b<<std::endl;


  std::cout<<std::endl;


  std::cout<<"In Main ) a : "<<a<<" b : "<<b<<std::endl;
  pointer_swap(&a,&b);
  std::cout<<"In Main ) a : "<<a<<" b : "<<b<<std::endl;
  
  return 0;
} 
