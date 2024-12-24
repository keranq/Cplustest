#include <iostream>
using namespace std;
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
    char myName;
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Some text";
  myObj.myName = 'c';

  // Print attribute values
  cout << myObj.myNum << "\n";
  cout << myObj.myString << "\n";
  cout << myObj.myName;

  return 0;
}