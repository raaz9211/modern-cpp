// 1. If expr’s type is a reference, ignore the reference part.
// 2. Then pattern-match expr’s type against ParamType to determine T.

#include <iostream>


template<typename T>
void f(T* param){           // param is now a pointer
    std::cout << typeid(param).name() << " - " << *param << std::endl;
}

int main() {
    int x = 27;             // x is an int
    const int *px = &x;      // px is a ptr to x as a const

    f(&x);               // T is int, param's type is const int*
    f(px);              // T is const int, param's type is const int*

}