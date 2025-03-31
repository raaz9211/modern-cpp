// 1. If expr’s type is a reference, ignore the reference part.
// 2. Then pattern-match expr’s type against ParamType to determine T.

#include <iostream>


template<typename T>
void f(const T& param){           // param is a const reference
    std::cout << typeid(param).name() << " - " << param << std::endl;
}

int main() {
    int x = 27;             // x is an int
    const int cx = x;       // cx is a const int
    const int &rx = x;      // rx is a reference to x as a const int

    f(x);               // T is int, param's type is const int&
    f(cx);              // T is const int, param's type is const int&
    f(rx);              // T is const int, param's type is const int&

}