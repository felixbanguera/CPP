#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 4:\n" << endl;
  cout << "Ternary Operator: \n"
    <<" variable_to_be_assigned = (condition) ? value_if_true : value_if_false \n"
    << endl;
  cout << "Example: print largest int, Check the code to see ternary operator :)\n" << endl;

  int num1 = 5;
  int num2 = 2;

  int largestNum = (num1 > num2) ? num1 : num2;

  cout << "Printing largestNum, for <<int largestNum = (num1 > num2) ? num1 : num2;>> = " << largestNum << endl;

  return 0;
}