#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 5:\n" << endl;
  cout << "Arrays and For loops: \n" << endl;
  cout << "Arrays: \n"
    << "Arrays must be declared of a type (int, char, etc) \n"
    << "Arrays can be declared as: <<int numsAry[5]>>, which is an array of five elements, not initialized.\n"
    << "Arrays can be declared and initialized as: <<int numsAryInitd[5] = {1, 2, 3, 4, 5}>>, which is an array of five elements, initialized.\n"
    << endl;
  cout << "Example: Values of arrays with different initialization andf dimensions, Check the code to see Arrays in use :)\n" << endl;

  int numsAry[5];
  cout << "int numsAry[5]; numsAry[2] = " << numsAry[2] << endl;

  int numsAryInitd[5] = {1, 2, 3, 4, 5};
  cout << "int numsAryInitd[5] = {1, 2, 3, 4, 5}; numsAryInitd[2] = " << numsAryInitd[2] << endl;

  char nameInAry[5][5] = {{'f','e','l','i','x'},
                          {'j','o','r','g','e'}};

  cout
    << "char nameInAry[5][5] = {{'f','e','l','i','x'},"
    << "{'j','o','r','g','e'}}; nameInAry[0][4] = "
    << nameInAry[0][4]
    << "\n\n" << endl;

cout << "For loops: \n"
  << "Can be defined as follows: << for(int i = 1; i <= 10; i++) >>"
  << endl;
cout << "Example, printing values of multidimensional array, Check code to see for loop implementation :)" << endl;

for(int i = 0; i < 2; i++){
  for(int j = 0; j < 5; j++){
    cout << nameInAry[i][j];
  }
  cout << endl;
}

  return 0;
}