#ifndef __PERMANENT__
#define __PERMANENT__
#include<iostream>
#include<string>
#include"FullTime.h"
using namespace std;
class Permanent : public FullTime{

private:

public:
  Permanent(string name);
  Permanent(string name, string title);
  virtual void goVacation();    // Difference between permanent and temporary
};
#endif
