#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<map>
#include<set>

using namespace std;  // std:: 생략을 위해 사용됨. 추천하지는 않음.(문어체와 구어체의 차이 정도?)

int main()
{
  //////////////////////////// 배열
  // 배열의 선언,정의 및 사용
  int data[10]={1,2,3,4,5,6,7,8,9,10};
  // 선언과 정의를 같이 하면 숫자를 생략해도 됨(값을 유추할 수 있을 때).
  //// int data[]={1,2,3,4,5,6,7,8,9,10};   
                                          
  cout<<data[2]<<endl;  // data[0] == 1. 시작이 0부터 시작.

  //////////////////////////// vector
  // std::vector의 선언, 정의 및 사용
  vector<int> vec_data;
  vec_data.push_back( 1 );   // vec_data ={1};
  vec_data.push_back( 2 );   // vec_data ={1,2};
  cout<<"vector [1] : "<<vec_data[1]<<endl;
  
  // vector의 내부내용 삭제
  vec_data.clear();

  // 이렇게 정의할 수도 있다.
  vec_data.assign( data, data+10 );   // +9가 아님.
  cout<<"vector[9] : "<<vec_data[9]<<endl;


  //////////////////////////// deque
  // std::deque의 선언, 정의 및 사용
  std::deque<int> deq_data;         
  deq_data.push_back(2);       // deq_data={2};
  deq_data.push_front(1);      // deq_data={1,2};
  deq_data.push_back(3);       // deq_data={1,2,3};
  cout<<"deque [2] :" << deq_data[2]<<endl;
  
  deq_data.clear();
  
  deq_data.assign(10,0);       // deq_data={0,0,0,0,0,0,0,0,0,0}
  cout<<"deque [2] :" << deq_data[2]<<endl;

  
  //////////////////////////// list
  // std::list의 선언, 정의 및 사용
  std::list<int> list_data;
  list_data.push_back(2);       // list_data={2};
  list_data.push_front(1);      // list_data={1,2};
  list_data.push_back(3);       // list_data={1,2,3};

  std:list<int>::const_iterator it;
  it = list_data.begin();

  cout<<*it<<endl;
  cout<<*(++it)<<endl;
  cout<<*(++it)<<endl;
  cout<<*(--it)<<endl;
  cout<<*(--it)<<endl;

  
  //////////////////////////// set
  // std::set의 선언, 정의 및 사용
  std::set<int> set_data;
  set_data.insert(3);
  set_data.insert(6);
  set_data.insert(4);
  set_data.insert(2);
  set_data.insert(7);

   






  return 0;
}

