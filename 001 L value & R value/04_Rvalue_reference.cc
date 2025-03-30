#include <iostream>

void printName(std::string &&name){
    std::cout << name << std::endl;
}

int main() {
// Lvalue                  // Rvalue
  std::string firstName = "Raj";
// Lvalue                  // Rvalue
  std::string secondName = "Kumar";

// Lvalue                  // Rvalue (firstName + secondName will create a temp variable then assigne it to fullName)
  std::string fullName = firstName + secondName;

  // printName(fullName); // error, rvalue reference only allow rvalue nit lvalue

  printName(firstName + secondName); // it's work with rvalue reference

  int a = 10;
  // int &&b = a; // error, rvalue reference only allow rvalue nit lvalue
  int &&b = 5; // it's work with rvalue reference
}
