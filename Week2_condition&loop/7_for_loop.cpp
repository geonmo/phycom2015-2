#include<iostream>

int main(){
  // for( 초기값 ; 조건값 ; Scope가 끝난 후 할 일)
  for( int i= 0 ; i< 100; i++) {
    std::cout<<"이번에 새로운 i = "<<i<<std::endl;
  }
  return 0;
}
