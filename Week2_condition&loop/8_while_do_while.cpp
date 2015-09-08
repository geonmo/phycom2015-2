#include<iostream>

int main()
{
  int a=0;
  while( a<10 ) {
    std::cout<<"Now a is "<<a<<std::endl;
    a++;
  }
  
  int b = 15;
  do {
    std::cout<<"First trial must be success at do while."<<std::endl;
    std::cout<<"Now b is "<<b<<std::endl;
  } while( b<10 ); 

  return 0;
}
