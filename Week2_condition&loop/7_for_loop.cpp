#include<iostream>

int main(){
  int sum =0;
  // for( 초기값 ; 조건값 ; Scope가 끝난 후 할 일)
  for( int i= 1 ; i<=100; i++) {
    sum = sum + i;
  }
  std::cout<<sum<<std::endl;
  return 0;
}
