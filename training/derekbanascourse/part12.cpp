#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

class User{
  private:
    string name;
    int id;
    int age;
    int u_id;
    static int numOfUsers;

  public:
    User();
    ~User();
    void set_name(string name_in){ name = name_in; };
    void set_id(int id_in){ id = id_in; };
    void set_age(int age_in){ age = age_in; };
    static int get_numOfUsers(){ return User::numOfUsers; };
    string get_name(){ return name; };
    int get_id(){ return id; };
    int get_age(){ return age; };
    void to_s(void);
};

int User::numOfUsers = 0;

User::User(){
  this -> u_id = ++User::numOfUsers;
  cout << "Creating a user with u_id: " << this -> u_id << "\n" << endl;
}

User::~User(){
  cout << "Destroying user with u_id: " << this -> u_id << "\n" << endl;
}

void User::to_s(){
  cout
    << "This user info:\n"
    << "u_id: " << this -> u_id << "\n"
    << "Name: " << this -> name << "\n"
    << "Id: " << this -> id << "\n"
    << "Age: " << this -> age << "\n" << endl;
}

int main(){

  cout << "Part 12:\n" << endl;
  cout
    << "Classes:\n\n"
    << "Definition: \n"
    << "class Class_Name{\n"
    << "  attr_accessor:\n"
    << "    type_of_variable variable_name;\n"
    << "    type_of_return function_name(input_types input_names){...}\n"
    << "};\n\n"
    << "Accesing class members using members accessor operator('.') or scope resolution operator('::'):\n"
    << "class_instance.class_attribute\n"
    << "type_of_return Class_Name::method_name(input_types input_names){..call to Class members..}\n"
    << "Also use ('this -> *' operator, when using '::' to access and instance member.\n\n"

    << "Example: will create an app to register users, with name, id, and age, Using a User class. Check the code :)\n" << endl;

    cout << "Users initialy: " << User::get_numOfUsers() << endl;

    vector <User*> pVAllUsers;

    /* The following is one way to create  a vector of users, could be used to later use its reference for methods
      vector <User> vUsers;
      vUsers.push_back(User());
      vUsers.push_back(User());

      for(int i = 0; i < vUsers.size(); i++){
        vUsers.at(i).to_s();
      }
  */

    User felix_user;
    felix_user.set_name("Felix");
    felix_user.set_id(1063274017);
    felix_user.set_age(31);
    pVAllUsers.push_back(&felix_user);
    //felix_user.to_s();

    User felix2_user;
    felix2_user.set_name("Felixxxx 2");
    felix2_user.set_id(11111);
    felix2_user.set_age(21);
    //felix2_user.to_s();
    pVAllUsers.push_back(&felix2_user);

    cout << "Inserting all users to vector\n" << endl;

    for(int i = 0; i < pVAllUsers.size(); i++){
      pVAllUsers.at(i) -> to_s();
    }

  return 0;
}