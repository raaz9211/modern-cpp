#include <iostream>

void setValue(int value){
    std::cout << value << std::endl;
}


void setValueRef(int &value){
    std::cout << value << std::endl;
}

void setValueRefConst(const int &value){
    std::cout << value << std::endl;
}

int main() {

  int i = 10;
  setValue(i); 
  setValue(10);

  setValueRef(i); 
//   setValueRef(10); // error, can't tale Lvalue ref from Rvalue.



// -----------------------------------const---------------------------------

    // int &a = 10;  // error, can't tale Lvalue ref from Rvalue.
    const int &a = 10;  // it's work with const. compiler will create a temp variable and store the Rvalue(10) then assing temp variable to `a`;
    setValueRefConst(10); // it's work with const.
}