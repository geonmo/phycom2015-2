#include<iostream>
#include<string>
#include"student.h"

int Student::getID() const {
  return id_;
}
std::string Student::getName() const {
  return name_;
}
std::string Student::getAddress() const {
  return address_;
}
