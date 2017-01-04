#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void makeYoung(int* myAge){
  cout << "Recived my age pointer with address: " << myAge << " and value: " << *myAge << endl;
  *myAge = 21;
}

void makeOld(int& age){
  cout << "Recived my age reference with value: " << age << endl;
  age = 65;
}

int addition (int a, int b)
{ return (a+b); }

int subtraction (int a, int b)
{ return (a-b); }

int operation (int x, int y, int (*functocall)(int,int))
{
  int g;
  g = (*functocall)(x,y);
  return (g);
}

int main(){

  cout << "Part 11:\n" << endl;
  cout << "Pointers \n\n"
    << "A pointer is a variable whose value is the address of another variable.\n"
    << "A reference is 'another name' for the same variable\n"
    << "TIP: Use pointer whenever you don't want to initialize a declaration.\n"
    << "TIP: A pointer can handle more than one variable assigned.\n"
    << "TIP: A reference should be initialized when declared, and cannot be changed during runtime.\n\n"
    << "Operators to take into account:\n"
    << "'&' : Address-of operator, returns the addres of a variable, preceding the variable by '&'\n"
    << "'*' : Dereference operator, creates a variavle whose value is the address of another variable.\n"
    << "Examples of notations:\n"
    << "int    *ip;    // pointer to an integer\n"
    << "double *dp;    // pointer to a double\n"
    << "float  *fp;    // pointer to a float\n"
    << "char   *ch     // pointer to character\n"
    << endl;

  cout << "Example: Getting the value and address of a variable, check the code :)\n\n";

  int myAge = 31;
  int * pMyAge = &myAge;

  cout
    << "the variable myAge = " << myAge << "\n"
    << "pointer pMyAge = " << pMyAge << "\n"
    << "accessing the data *pMyAge = " << *pMyAge << "\n\n"
    << endl;

  // Pointers and Arrays:
  cout
    << "Pointers and Arrays: (An array name is just a pointer to an array)\n"
    << "Pointers and arrays support the same set of operations, with the same meaning for both.\n"
    << "The main difference being that pointers can be assigned new addresses, while arrays cannot.\n"
    << endl;
  cout << "Example: Getting the value and address of an Array, check the code :)\n\n";

  int aNums[5] = {11,22,33,44,55};
  int* pANums = aNums;

  cout << "pANums = " << pANums << " - Value = " << *pANums << endl;
  pANums++;
  cout << "pANums = " << pANums << " - Value = " << *pANums << endl;

  //Pointers and functions:
  cout
    << "Pointers and functions: ()\n"
    << "Arguments can be pointers.\n"
    << "Or another use of this is for passing a function as an argument to another function.\n"
    << "the name of the function is enclosed between parentheses () and an asterisk (*) is inserted before the name.\n"
    << endl;

  cout << "Example: Passing a pointer and reference as an argument, check the code :)\n\n";
  cout
    << "Check the functions declared before main:\n"
    << "void makeYoung(int* myAge){...}\n"
    << "void makeOld(int& age){...}\n"
    << endl;

  // myAge is currently 31, I will be using a refewrence to the variable to modify the value from within a function:
  makeYoung(&myAge);
  cout
    << "makeYoung receives a pointer to the reference of myAge:"
    << "After running makeYoung(&myAge); myAge = " << myAge
    << endl;

  int& rMyAge = myAge;
  makeOld(rMyAge);
  cout
    << "makeOld receives a reference of myAge:\n"
    << "After running makeOld(rMyAge); myAge = " << myAge << "\n\n"
    << endl;

  // Using pointers to functions::::

  cout << "Example: Passing a function as an argument, check the code :)\n\n";
  cout
    << "Check the functions declared before main:\n"
    << "int addition (int a, int b){...}\n"
    << "int subtraction (int a, int b){...}\n"
    << "int operation (int x, int y, int (*functocall)(int,int)){...}\n"
    << endl;

  int m,n;
  int (*minus)(int,int) = subtraction;

  m = operation (7, 5, addition);
  cout
    << "Sending addition() as a pointer to operation()\n"
    << "m = operation (7, 5, addition); : " << m
    << endl;
n = operation (20, m, minus);
  cout
    << "Sending minus which is a pointer to operation()\n"
    << "n = operation (20, m, minus); : " << n
    << endl;

  return 0;
}