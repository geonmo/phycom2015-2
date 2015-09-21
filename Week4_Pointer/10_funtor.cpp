#include<iostream>

int add(int a, int b){
  std::cout<<"a+b = "<<a+b<<std::endl;
  return 0 ;
}

int substract( int a, int b) {
  std::cout<<"a-b = "<<a-b<<std::endl;
  return 0 ;
}


int main()
{
  int (*absFunction)(int , int );  // 함수 포인터의 선언!
 
  int a,b;
  char c;

  std::cin>>a>>c>>b;  // 14+12
  if ( c=='+') absFunction = add;
  else if ( c=='-') absFunction = substract;
  else {
    std::cerr<<"You did not input correctly. Terminate this program"<<std::endl;
    return -1;
  }
  absFunction(a,b);
  return 0;
}
