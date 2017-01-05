#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(){

  cout << "Part 8:\n" << endl;
  cout << "Vectors: \n\n"
    << "A Vector object is similar  to an array but can change in size\n"
    << "vector<type> variable_name (number_of_elements); or \n"
    << "vector <type> variable_name;\n"
    << endl;

  vector <int> vNumbers(10);
  cout << "printing initialy vNumbers: [";
  for(int i = 0; i < vNumbers.size(); i++){
    cout << vNumbers[i] ;
    if(i != 9){
      cout << ",";
    }
  }
  cout << "]" << endl;

  int aNumbers[5] = {10,11,12,13,14};

  cout << "Example:adding an initialized array to a vector, Check the code to see :)\n" << endl;

  vNumbers.insert(vNumbers.begin(), aNumbers, aNumbers+((sizeof(aNumbers)/sizeof(*aNumbers))));

  cout << "after vNumbers.insert(vNumbers.begin(), aNumbers, ...) printing vNumbers: [";
  for(int i = 0; i < vNumbers.size(); i++){
    cout << vNumbers[i] ;
    if(i != 9){
      cout << ",";
    }
  }
  cout << "]" << "\n\n" << endl;

  cout
    << "Vectors has different methods:" << "\n"
    << "begin(): gets the first index" << "\n"
    << "front(): gets the first value" << "\n"
    << "vNumbers.front(): " << vNumbers.front() << "\n"
    << "insert(): inserts a value in the defined index" << "\n"
    << "example: vNumbers.insert(vNumbers.begin()+5, 7777): " << "\n";
  vNumbers.insert(vNumbers.begin()+5, 7777);
  cout
    << "at(index): gets the value at index index" << "\n"
    << "vNumbers.at(5): " << vNumbers.at(5) << "\n"
    << "back(): to get the final value" << "\n"
    << "vNumbers.back(): " << vNumbers.back() << "\n"
    << "push_back() to insert at the end, exmaple: vNumbers.push_back(999);: " << "\n";
  vNumbers.push_back(999);
  cout
    << "vNumbers.back(): " << vNumbers.back() << "\n"
    << "pop_back(): to remove the last value" << "\n"
    << "pop_back() to remove the last value, example: vNumbers.pop_back(): " << "\n";
   vNumbers.pop_back();
   cout
    << "vNumbers.back(): " << vNumbers.back() << "\n"
    << endl;

  return 0;
}