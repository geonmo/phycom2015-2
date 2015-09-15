#include<iostream>
#include<map>

int main(){
  // 나중에 배우겠지만, 일단 std::string이라는 문자열 클래스가 있으니 써보도록 합시다.
  // 대개는 아래와 반대로 저장하겠지만, 테스트를 위해서..
  
  std::string string_test("Hello");
  std::cout<<(string_test+" world")<<std::endl;

  std::map< std::string, int > students;

  // map에 데이터 넣는법 #1 
  std::pair<std::string, int> p_student1 = std::make_pair< std::string, int>("철수",2210);
  students.insert( p_student1);

  // map에 데이터 넣는법 #2 
  students.insert( std::make_pair<std::string, int>("영희", 2211));

  // map에 데이터 넣는법 #3 
  students["길동"] = 2410;

  // 마치 임의 접근 한 것 처럼 쓸수 있다.(실은 그렇지 않지만,) 
  std::cout<<"연산자 [] 사용시"<<std::endl;
  std::cout<<"철수 : "<<students["철수"]<<std::endl;
  std::cout<<"영희 : "<<students["영희"]<<std::endl;
  std::cout<<"길동 : "<<students["길동"]<<std::endl;

  std::cout<<"반복자 사용시"<<std::endl;
  // std::map의 반복자 사용법
  for( std::map<std::string, int>::const_iterator it = students.begin() ; it != students.end() ; ++it) {
    std::cout<<(*it).first<<" :  "<<it->second<<std::endl; 
  }


  // std::map의 find 함수
  {
    std::map<std::string, int>::const_iterator it = students.find("철수");
    if ( it != students.end()) {
      std::cout<<it->first; 
      std::cout<<" :   ";
      std::cout<<it->second<<std::endl;
    }
    else {
      std::cout<<"Can not find this key"<<std::endl;
    }

  }
  return 0;
}
