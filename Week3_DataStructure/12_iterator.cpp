#include<iostream>
#include<list>
#include<set>

using namespace std; 

int main()
{
  std::cout<<"list:"<<std::endl; 
  //////////////////////////// list
  // std::list의 선언, 정의 및 사용
  std::list<int> list_data;
  list_data.push_back(2);       // list_data={2};
  list_data.push_front(1);      // list_data={1,2};
  list_data.push_back(3);       // list_data={1,2,3};

  // 읽기 전용 반복자 사용 
  { 
    std:list<int>::const_iterator it;
    it = list_data.begin();

    cout<<*it<<endl;
    cout<<*(++it)<<endl;
    cout<<*(++it)<<endl;
    cout<<*(--it)<<endl;
    cout<<*(--it)<<endl;
  }

  // 삭제 또는 값 변경 때는 그냥 iterator 사용
  {
    std::list<int>::iterator it = list_data.begin();
    std::list<int>::iterator after_it;
    ++it;
    after_it = list_data.erase(it);   // list_data={1,3};  now, after_it point to "3". iterator "it" is destroyed.
    
    std::cout<<"after_it: "<<*(after_it)<<std::endl;   
  }
  std::cout<<"After erase"<<std::endl;
  for( std::list<int>::const_iterator it = list_data.begin() ; it != list_data.end(); ++it) {
    cout<<*(it)<<endl;
  }
 
  {
    std::list<int>::iterator it = list_data.begin();
    ++it;                            // list_data={1,3};   iterator "it" point to "3"
    list_data.insert( it, 5);        // list_data={1,5,3}; 
    list_data.insert( it, 9);        // list_data={1,5,9,3};
    list_data.insert( it, 10);       // list_data={1,5,9,10,3};
  }
  std::cout<<"After insert"<<std::endl;
  for( std::list<int>::const_iterator it = list_data.begin() ; it != list_data.end(); ++it) {
    cout<<*(it)<<endl;
  } 


  

 
  std::cout<<"set:"<<std::endl; 
  //////////////////////////// set
  // std::set의 선언, 정의 및 사용
  std::set<int> set_data;
  set_data.insert(3);
  set_data.insert(6);
  set_data.insert(4);
  set_data.insert(2);
  set_data.insert(7);

  for( std::set<int>::const_iterator it = set_data.begin() ; it != set_data.end() ; ++it) {
    cout<<*(it)<<endl;
  }

  {
    std::set<int>::const_iterator it = set_data.begin();
    ++it;
    ++it;
    set_data.erase(it);
  }
  std::cout<<"After erase"<<std::endl;
  for( std::set<int>::const_iterator it = set_data.begin() ; it != set_data.end() ; ++it) {
    cout<<*(it)<<endl;
  }

  return 0;
}
