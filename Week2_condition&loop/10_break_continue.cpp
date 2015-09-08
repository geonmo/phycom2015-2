#include<iostream>

int main()
{
  int a=0;
  while ( a<20 ) {
    a++;
    if ( a == 5) {
      continue;
    }
    if ( a== 12) {
      break; 
    }
    std::cout<<"This a is "<<a<<std::endl;
  }


  return 0;
}
