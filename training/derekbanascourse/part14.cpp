#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class Person{
  protected:
    string name;

  public:
    void test_early_binding(){
      cout << "test_early_binding from Person.\n" << endl;
    }
    virtual void what_am_i(){
      cout << "I'm a Person.\n" << endl;
    }
};

class Child: public Person{
  public:
    void what_am_i(){
      cout << "I'm a Child!\n" << endl;
    }
    void test_early_binding(){
      cout << "test_early_binding from Child!\n" << endl;
    }
};

class Adult: public Person{
  public:
    void what_am_i(){
      cout << "I'm an Adult!\n" << endl;
    }
    void test_early_binding(){
      cout << "test_early_binding from Adult!\n" << endl;
    }
};

int main(){

  cout << "Part 14:\n" << endl;
  cout << "Polymorphism: \n\n"
    << "Definition:\n"
    << "You have different classes (derived from the same parent class) with a function of the same name,\n"
    << "and even the same parameters, but with different implementations. \n"
    << "Sould use the kwyword 'virtual' in the base class.\n"
    << "Declaration:\n"
    << "virtual return_type method_name(params){...definition and return ...}\n\n"
    << "Declaration of pure virtual method:\n"
    << "virtual return_type method_name() = 0;\n"
    << "The '= 0' tells the compiler that the function has no body.\n"
    << endl;
    cout
      << "Example: Created a base class Person, and twoo children class Child and Adult, to test the use of virtual keyword\n" << endl;

    Child childy;
    Adult adulty;
    Person* pChildy;
    Person* pAdulty;
    pChildy = &childy;
    pAdulty = &adulty;

    cout << "Here the response of the method test_early_binding, which is not virtual in base class:\n" << endl;
    pChildy -> test_early_binding();
    pAdulty -> test_early_binding();
    childy.test_early_binding();
    adulty.test_early_binding();

    cout << "Here the response of the method what_am_i, which is virtual in base class:\n" << endl;
    childy.what_am_i();
    adulty.what_am_i();
    pChildy -> what_am_i();
    pAdulty -> what_am_i();
  return 0;
}