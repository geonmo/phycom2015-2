#include<iostream>

int main()
{
  // Assume that A = 1234.5678, B = 2345.6789
  int A_int = 1234;
  int A_dec = 5678;
  int B_int = 2345;
  int B_dec = 6789;

  int sum_int = A_int + B_int ;
  int sum_dec = A_dec + B_dec ;
  
  sum_decToint = sum_dec / 10000;
  sum_int = sum_int + sum_decToint;

  sum_dec = sum_dec % 10000;
  
  std::cout<<sum_int<<"."<<sum_dec<<std::endl;
  
  return 0;
}
