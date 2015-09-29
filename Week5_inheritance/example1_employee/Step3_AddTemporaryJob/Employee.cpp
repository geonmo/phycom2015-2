#include"Employee.h"
#include <stdlib.h>
using namespace std;
Employee::Employee(string name) {
  name_ = name;
  job_title_ = std::string("잡무");
  cout<<"직원을 고용합니다. : 이름("<<name_<<") 업무("<<job_title_<<")"<<endl;
}  
Employee::Employee(string name, string job_title) {
  name_ = name;
  if ( job_title.compare("경리")==0 || job_title.compare("영업")==0 || job_title.compare("연구")==0 || job_title.compare("잡무")==0 ) {
    job_title_ = job_title;
    cout<<"직원을 고용합니다. : 이름("<<name_<<") 업무("<<job_title_<<")"<<endl;
  }
  else {
    cout<<"해당 일자리가 존재하지 않습니다."<<endl;
  }
}  

void Employee::receiveSalary(){
  std::cout<<name_<<"은/는 봉급으로 "<<calculateSalary()<<"원을 받았습니다."<<std::endl;
}

