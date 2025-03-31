#include <iostream>

void someFunction(int a, double d){ // type is void(int, double)
    std::cout << a << " " << d << std::endl;
}

template<typename T>
void f1(T param){ // in f1, param passed by value
    std::cout << typeid(param).name() << " - ";
    param(1, 1.1);
}

template<typename T>
void f2(T &param){ // in f2, param passed by ref
    std::cout << typeid(param).name() << " - ";
    param(2, 2.2);
}

int main() {
    f1(someFunction); // type is void (*)(int, double)
    f2(someFunction); // type is void (&)(int, double)
}


