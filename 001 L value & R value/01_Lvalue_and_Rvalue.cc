#include <iostream>

int getValue(){
    return 10;
}

int &getValueRef(){

    int value = 10;
    return value;
}

int main() {

    int x = 5; // x is Lvalue as it can allocate memory, 5 is r value as it need a memory.
    // 10 = x; // error
    int y = x; // not error

    int a = getValue(); // same eg.
    // getValue() = x; // error
    getValueRef() = x; // it eill work and store x into the value inside the function.
}