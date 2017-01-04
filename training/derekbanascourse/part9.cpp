#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int addNumbers(int firstN, int secondN = 0){
  return firstN + secondN;
}

int addNumbers(int firstN, int secondN, int thirdN){
  return firstN + secondN + thirdN;
}

int factorial(int number){
  int tmp;
  if(number == 1) tmp = 1;
  else tmp = factorial(number - 1) * number;
  return tmp;
}

int main(){

  cout << "Part 9:\n" << endl;
  cout << "Functions: \n\n"
    << "Syntax: \n\n"
    << "return_data_type nameOfFunction(param1_data_type para1_name, ..., paramN_data_type paramN_name[= optional_value]){ \n"
    << "...\nreturn return_data_type_value; \n}\n"
    << endl;
cout << "Example: using function created before the main function, check the code :)";
cout
  << "Defined functions:\n"
  << "int addNumbers(int firstN, int secondN = 0){...}\n"
  << "int addNumbers(int firstN, int secondN, int thirdN){...}\n"
  << "int factorial(int number){...}\n which is a recursive function, check the code!"
  << endl;

cout
  << "addNumbers(11) = " << addNumbers(11) << "\n"
  << "addNumbers(11, 20) = " << addNumbers(11, 20) << "\n"
  << "addNumbers(11, 20, 30) = " << addNumbers(11, 20, 30) << "\n"
  << "factorial(5) = " << factorial(5) << "\n"
  << endl;

  return 0;
}