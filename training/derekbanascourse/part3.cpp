#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 3:\n" << endl;
  cout << "Switch statement: \n"
    <<" (Should always use break if you need the switch to stop verifying !!!!!) \n"
    <<" (Default do NOT need a 'break' call :) \n"
    << endl;
  cout << "Example: greet according to an int, Check the code to see switch statement :)\n" << endl;

  int greetOptn = 2;
  switch(greetOptn){
    case 1:
      cout << "Bonjour" << endl;
      break; //Should always use break if you need the switch to stop verifying !!!!!
    case 2:
      cout << "Hello ;)" << endl;
      break;
    case 3:
      cout << "Guten Tag" << endl;
      break;
    default:
      cout << "Greeting with no valid option, so default!" << endl;
  }

  return 0;
}