#include<iostream>
#include<list>
#include<map>
#include<set>

using namespace std; 

int main()
{
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
