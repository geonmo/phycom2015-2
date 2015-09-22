#include<iostream>
#include<string>
#include<vector>
class Student {
private:
  int id_;
  std::string name_;
  std::string address_;
  int score_;
public :
  Student() {
    id_ = 0;
    name_ = std::string("");
    address_ = std::string("");
    score_ = 0;
  }
  Student(int id, std::string name, std::string address, int score) {
    id_ = id;
    name_ = name;
    address_ = address;
    score_ = score;
  }

  void setID(int id) { id_ = id;}
  // 멤버함수의 Argument를 바꾸면 같은 이름에 다른 함수를 만들어 낼 수 있다.
  void setID(std::string str) { std::cout<<"에러!"<<std::endl; }

  // 멤버함수를 선언만 하고 외부에서 정의할 수도 있다.
  void setAddress(std::string address) {
    address_ = address;
  }

  // get함수들. 정의는 cpp 파일에서 함..
  int getID() const;
  std::string getAddress() const ;
  std::string getName() const ;
  int getScore() const { return score_; }
  //std::string memo_;  메모는 어떠한 제한도 없이 때문에 public에 넣어도 무방하나 되도록 private에 넣는 것이 좋음

};


