#include"Employee.h"
#include <stdlib.h>
using namespace std;
Employee::Employee(string name) {
  name_ = name;
  job_title_ = std::string("잡무");
  cout<<"직원을 고용합니다. : 이름("<<name_<<") 업무("<<job_title_<<")"<<endl;
  day_of_service_= 0;
  salary_day_=0;
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
  day_of_service_= 0;
  salary_day_=0;
}  


void Employee::doWork(){
  if ( job_title_.compare("경리")==0 || job_title_.compare("영업")==0 || job_title_.compare("연구")==0 || job_title_.compare("잡무")==0 ) {
    cout<<job_title_<<" 업무를 진행합니다."<<endl;
    cout<<job_title_<<" 업무를 종료합니다."<<endl;
    day_of_service_++;
    salary_day_++;
  }
  else {
    cout<<"해당 업무를 알 수 없습니다. 치명적인 오류가 발생하였습니다."<<endl;
    exit(-1);
  }
}

void Employee::goVacation(){
  cout<<"휴가를 갑니다."<<endl;
  cout<<"업무로 복귀합니다."<<endl;
  day_of_service_++;
  salary_day_++;
}
void Employee::receiveSalary(){
  std::cout<<name_<<"은/는 봉급으로 "<<calculateSalary()<<"원을 받았습니다."<<std::endl;
}

int Employee::calculateSalary(){
  int salary;
  int pay;
  if( job_title_.compare("경리")==0 ) {
    pay=80000;
  }
  else if( job_title_.compare("영업")==0 ) {
    pay=120000;
  }
  else if( job_title_.compare("연구")==0 ) {
    pay=90000;
  }
  else if(job_title_.compare("잡무")==0) {
    pay=60000;
  }
  salary = pay*salary_day_;
  salary_day_=0;
   
  return salary;
}
