#include<iostream>

using namespace std;
int main()
{
  int a[5]     = {32,45,21,11,62};
  int* pa = a;
  cout<<"Integer : "<<a[1]<<"\t\t size of Integer variable : "<<sizeof(a)<<std::endl;
  cout<<endl;
  cout<<"Interger pointer : "<<*(pa+1)<<"\t\t size of Integer pointer : "<<sizeof(pa)<<endl;
  return 0;
}
