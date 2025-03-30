#include <iostream>

template <typename T>
void f(const T& param){
    std::cout << param << std::endl;
}

int main() {

    int x = 5;

    f(x);
}