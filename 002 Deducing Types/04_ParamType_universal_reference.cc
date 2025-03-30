// Universal references not the same as lvalue references or rvalue references.

// If expr is an lvalue, both T and ParamType are deduced to be lvalue references.
// If expr is an rvalue, the “normal” (i.e., Case 1) rules apply

#include <iostream>

template<typename T>
void f(T&& param){           // param is a reference
    std::cout << param << std::endl;
}


int main() {
    int x = 27;             // x is an int
    const int cx = x;       // cx is a const int
    const int &rx = x;      // rx is a reference to x as a const int

    f(x);               // x is lvalue, so T is int&, param's type is int&
    f(cx);              // cx is lvalue, so T is const int&, param's type is const int&
    f(rx);              // rx is lvalue, so T is const int&, param's type is const int&
    f(27);              // 27 is rvalue, so T is int, param's type is therefore int&&
}