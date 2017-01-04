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


  string sCat = "cat";
  string sDog = "dog";
  string fullName = "jorge felix";
  string halfName;

  cout << "Example: using extra methods: compare, assign, find, insert, erase, replace ... check the code ;)" << endl;
  cout
    << "Comparing strings \"cat\".compare(\"cat\") =  " << sCat.compare(sCat) << "\n\n"
    << "Comparing strings \"cat\".compare(\"dog\") =  " << sCat.compare(sDog) << "\n\n"
    << "Substring with assign method, halfName.assign(fullName,0,5) = " << halfName.assign(fullName,0,5) << "\n\n"
    << "fullName = " << fullName << " - halfName = " << halfName << "\n\n"
    << "finding index with find: fullName.find(\"felix\", 0) = " << fullName.find("felix") << "\n\n"
    << "insert string: fullName.inser(11, \" banguera\") = " << fullName.insert(11, " banguera") << "\n\n"
    << "erase string: fullName.erase(5, 6) = " << fullName.erase(5, 6) << "\n\n"
    << "replace string: fullName.replace(0, 1, \"J\").replace(6, 1, \"B\") = " << fullName.replace(0, 1, "J").replace(6, 1, "B")  << "\n\n"
    << "The final fullName: " << fullName
    << endl;
  return 0;
}