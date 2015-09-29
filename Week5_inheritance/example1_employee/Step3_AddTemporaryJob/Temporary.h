#ifndef __TEMPORARY__
#define __TEMPORARY__
#include<iostream>
#include<string>
#include"FullTime.h"
using namespace std;
class Temporary : public FullTime{

private:
public:
  Temporary(string name);
  Temporary(string name, string title);
  virtual void goVacation();    // Difference between permanent and temporary
};
#endif
