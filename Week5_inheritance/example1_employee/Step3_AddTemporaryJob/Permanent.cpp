#include"Permanent.h"
#include <stdlib.h>
using namespace std;
Permanent::Permanent(string name):FullTime(name) {
}  
Permanent::Permanent(string name, string job_title) : FullTime(name, job_title){
}  

void Permanent::goVacation(){
  cout<<"휴가를 갑니다."<<endl;
  cout<<"업무로 복귀합니다."<<endl;
  setDayOfService( getDayOfService()+1) ;
  setSalaryDay( getSalaryDay()+1 ) ;
}


