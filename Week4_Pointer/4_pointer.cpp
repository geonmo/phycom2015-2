#include<iostream>

using namespace std;
int main()
{
  int a[5]     = {32,45,21,11,62};
  int* pa = &a[0];  // == int* pa = a;
  std::cout<<"Value of Pointer A : "<<pa<<std::endl;
  std::cout<<"Value of A : "<<*pa<<std::endl;
  std::cout<<"Second element of A : "<<*(pa+1)<<std::endl;
  return 0;
}
