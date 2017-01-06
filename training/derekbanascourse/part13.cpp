#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

// Base class Shape
class Shape {
  public:
    void setWidth(int w) {
      width = w;
    }
    void setHeight(int h) {
      height = h;
    }
    static void static_method(){
      cout << "This is a static method of the Shape Class!" << endl;
    }

  protected:
    int width;
    int height;
};

// Base class PaintCost
class PaintCost  {
  public:
    int getCost(int area) {
      return area * 70;
    }
};

// Derived class
class Rectangle: public Shape, public PaintCost {
  public:
    int getArea() {
      return (width * height);
    }
    void print_construct_example(){
      cout << "print_construct_example: " << construct_example << endl;
    }
    Rectangle();
  protected:
    string construct_example;
};

Rectangle::Rectangle(): Shape(), PaintCost(), construct_example("Whaaat"){
  cout << "constructing a rectangle" << endl;
  //this -> construct_example = str_input;
}

int main(){

  cout << "Part 13:\n" << endl;
  cout << "Inheritance: \n\n"
    << "Definition:\n"
    << "class derived-class: access-specifier base-class{...}\n"
    << "the access-specifier can be 'public', 'protected', or 'private' with it s consecuences.\n"
    << "A C++ class can inherit members from more than one class and here is the extended syntax:\n"
    << "class derived-class: access baseA, access baseB....{...}\n"
    << "A static method of the parent class can be calle from an instance of the derived class as follows:\n"
    << "instance_of_devired_cl.ParentClass::static_method();"
    << endl;
    cout
      << "Example: The exmaple is a Rectangle class that inherits from two classes, "
      << "the base has been copied from Tutotials point but it has been modified.\n" << endl;

  Rectangle rectangle;
   int area;

   rectangle.setWidth(5);
   rectangle.setHeight(7);

   area = rectangle.getArea();

   // Print the area of the object.
   cout << "Total area: " << rectangle.getArea() << endl;

   // Print the total cost of painting
   cout << "Total paint cost: $" << rectangle.getCost(area) << endl;

   //the static method of the parent class call
   rectangle.Shape::static_method();

   rectangle.print_construct_example();


  return 0;
}