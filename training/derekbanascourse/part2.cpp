#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 2:\n" << endl;
  cout << "If statement: \n" << endl;
  cout << "Comparing operators: ==, !=, >, <, >=, <= "<< endl;
  cout << "Logic operators: &&, ||, !\n" << endl;
  cout << "Example, validate if a person is able to drive, Check the code to see if and else statements :)" << endl;
  int age = 70;
  int ageLastExam = 16;
  bool isNotIntoxicated = true;

  if((age >= 1) && (age < 16)){
    cout << "Cannot drive" << endl;
  }else if(!isNotIntoxicated){
    cout << "Cannot drive" << endl;
  }else if(age >= 80 && ((age > 100) || ((age - ageLastExam) > 5))){
    cout << "Cannot drive" << endl;
  }else{
    cout << "Can drive :)" << endl;
  }

  return 0;
}