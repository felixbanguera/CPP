#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 7:\n" << endl;
  cout << "Strings: \n\n"
    << "A String object is an array od char types\n"
    << endl;
  cout << "Example:adding an initialized array or char with a string, Check the code to see :)\n" << endl;

  char happyAry[6] = {'H', 'a', 'a', 'p', 'y', '\0'};
  string birthdayStr = " Birthday";

  cout << "happyAry[6] + birthdayStr = " << happyAry + birthdayStr << endl;

  string emptyStr;

  cout
    << "Extra String operations and methods: \n"
    << "String size: birthdayStr.size() = " << birthdayStr.size() << "\n\n"
    << "String is empty: birthdayStr.empty() = " << birthdayStr.empty() << "\n\n"
    << "String is empty: emptyStr.empty() = " << emptyStr.empty() << "\n\n"
    << "Double to String coversion: stod(\"0.1234\") + 1 = " << stod("0.1234") + 1 << "\n\n"
    << endl;
  return 0;
}