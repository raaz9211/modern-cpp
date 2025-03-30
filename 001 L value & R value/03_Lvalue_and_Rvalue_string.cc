#include <iostream>

void printName(std::string &name){
    std::cout << name << std::endl;
}

void printNameConst(const std::string &name){
    std::cout << name << std::endl;
}


int main() {
// Lvalue                  // Rvalue
  std::string firstName = "Raj";
// Lvalue                  // Rvalue
  std::string secondName = "Kumar";

// Lvalue                  // Rvalue (firstName + secondName will create a temp variable then assigne it to fullName)
  std::string fullName = firstName + secondName;

  printName(fullName); // as we are passing Lvalue
//   printName(firstName + secondName); // error, as we are passing Rvalue

  printNameConst(firstName + secondName); //it's work with const. compiler will create a temp variable and store the Rvalue then assing temp variable in the function`;

}
