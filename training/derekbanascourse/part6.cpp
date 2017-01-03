#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 6:\n" << endl;
  cout << "While loops and Do-While loops: \n\n"
    << " while(condition){...} \n"
    << " do{...}while(condition); //Do not forget the semicolon at the end !!! \n"
    << "generate random number with: rand() \n"
    << "get input from console with: getline(cin, variable_to_assig_as_string) \n"
    << endl;
  cout << "Example:generating random numbers until a condition, Check the code to see while and rand in use :)\n" << endl;

  int randNum = (rand() % 100) + 1;

  while(randNum != 100){
    cout << randNum << ", ";
    randNum = (rand() % 100) + 1;
  }
  cout << endl;

  string sNumberInput;
  int intNumberGuessed = 0;

  cout << "Example: The followig is the example of the Do-While loop with getline example as well. Check the code :)\n" << endl;

  do{
    cout << "Guess between 1 and 10 a number: ";
    getline(cin, sNumberInput);

    intNumberGuessed = stoi(sNumberInput);

    cout << intNumberGuessed << endl;

  }while(intNumberGuessed != 4);

  cout << "You win!" << endl;

  return 0;
}