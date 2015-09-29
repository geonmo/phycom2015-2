#include<iostream>
#include<string>

using namespace std;
class Employee {

private:
  string name_;
  string job_title_;
  int day_of_service_;
  int salary_day_;
public:
  Employee(string name, string title);
  void doWork();
  void goVacation();
  void receiveSalary();
  int calculateSalary();

};
