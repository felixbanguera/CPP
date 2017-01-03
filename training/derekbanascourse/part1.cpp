// This is a comment

/*
Multi line commnet
*/

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 1:" << endl;
  cout << "**Variable assignation and data types: " << endl;

  /*
    Creating Variables:
      - Variable names MUST start with a letter.
      - Variable names can contain numbers or underscore

    Constants can also be created using 'const', they cannot be altered during runtime
  */

  const double PI = 3.1415926535;
  char myGrade = 'A'; // char types can only containg one character since it only occupies a byte in mem.
  bool isHappy = true; // recomend boolean variables ti start with 'is'
  int myAge = 31;
  float favNum = 2.185;
  double otherFavNum = 9.18263548;
  cout << "Printing Favorite Number: " << favNum << endl;
  cout << "Getting size of Favorite Number in bytes: " << sizeof(favNum) << endl;

  cout << "Basic operators: " << endl;
  cout << "+, - , *, /, %, ++, --" << endl;
  cout << "Basic operators examples: " << endl;
  cout << "5 + 2 = " << 5 + 2 << endl;
  cout << "5 - 2 = " << 5 - 2 << endl;
  cout << "5 * 2 = " << 5 * 2 << endl;
  cout << "5 / 2 = " << 5 / 2 << endl;
  cout << "5 % 2 = " << 5 % 2 << endl;

  cout << "Order of operations is *, /, +, -" << endl;

  cout << "Shortcuts for increment examples: " << endl;
  int five = 5;
  cout << "5++ = " << five++ << endl;
  cout << "++5 = " << ++five << endl;
  cout << "5-- = " << five-- << endl;
  cout << "--5 = " << --five << endl;

  cout << "Casting to a Float:" << endl;
  cout << "4 / 5 = " << 4 / 5 << endl;
  cout << "(float) 4 / 5 = " << (float) 4 / 5 << endl;

  return 0;
}