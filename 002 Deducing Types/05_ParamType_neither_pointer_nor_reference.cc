// 1. As before, if expr’s type is a reference, ignore the reference part.
// 2. If, after ignoring expr’s reference-ness, expr is const, ignore that, too. If it’s volatile, also ignore that.

#include<iostream>

template<typename T>
void f(T param){           // param is a value
    std::cout << param << std::endl;
}

int main() {
    int x = 27;             // x is an int
    const int cx = x;       // cx is a const int
    const int &rx = x;      // rx is a reference to x as a const int

    f(x);                   // T's and param's types are both int
    f(cx);                  // T's and param's types are both int
    f(rx);                  // T's and param's types are both int


}


// Note :
// - that even though cx and rx represent const values, param isn’t const.
// -  param is an object that’s completely independent of cx and rx—a copy of cx or rx. cx and rx can’t be modified says nothing about whether param can be