#include"FullTime.h"
#include <stdlib.h>
using namespace std;
FullTime::FullTime(string name) : Employee(name) {
  day_of_service_= 0;
  salary_day_=0;
}  
FullTime::FullTime(string name, string job_title) : Employee(name, job_title){
  day_of_service_= 0;
  salary_day_=0;
}  

void FullTime::doWork(){
  if ( getJobTitle().compare("경리")==0 || getJobTitle().compare("영업")==0 || getJobTitle().compare("연구")==0 || getJobTitle().compare("잡무")==0 ) {
    cout<<getJobTitle()<<" 업무를 진행합니다."<<endl;
    cout<<getJobTitle()<<" 업무를 종료합니다."<<endl;
    day_of_service_++;
    salary_day_++;
  }
  else {
    cout<<"해당 업무를 알 수 없습니다. 치명적인 오류가 발생하였습니다."<<endl;
    exit(-1);
  }
}

int FullTime::calculateSalary(){
  int salary;
  int pay;
  if( getJobTitle().compare("경리")==0 ) {
    pay=80000;
  }
  else if( getJobTitle().compare("영업")==0 ) {
    pay=120000;
  }
  else if( getJobTitle().compare("연구")==0 ) {
    pay=90000;
  }
  else if(getJobTitle().compare("잡무")==0) {
    pay=60000;
  }
  salary = pay*salary_day_;
  salary_day_=0;
   
  return salary;
}
