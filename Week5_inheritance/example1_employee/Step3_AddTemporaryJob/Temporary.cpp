#include"Temporary.h"
#include <stdlib.h>
using namespace std;
Temporary::Temporary(string name):FullTime(name) {
}  
Temporary::Temporary(string name, string job_title) : FullTime(name, job_title){
}  

void Temporary::goVacation(){
  cout<<"휴가를 갑니다."<<endl;
  cout<<"업무로 복귀합니다."<<endl;
  setDayOfService( getDayOfService()+1) ;
  //setSalaryDay( getSalaryDay()+1 ) ;
}


