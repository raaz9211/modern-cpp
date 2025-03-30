// 1. As before, if expr’s type is a reference, ignore the reference part.
// 2. If, after ignoring expr’s reference-ness, expr is const, ignore that, too. If it’s volatile, also ignore that.

#include<iostream>

template<typename T>
void f(T param){           // param is a value
    std::cout << param << std::endl;
}

int main() {

// const: ptr can’t be made to point to a different location, nor can it be set to null.
//               \/
    const char* const ptr =  "Fun with pointers";  // ptr is const pointer to const object
//   /\     
// The const to the left of the asterisk says that what ptr points to—the character string—is const, hence can’t be modified.
    f(ptr); // pass arg of type const char *
}


// Note :
// - Type deduction ignores the const qualifier of the pointer but preserves the const qualifier of the pointed-to data.
// - The deduced type for the parameter (param) is const char*, meaning:
//     - param can be modified (it's a modifiable pointer).
//     - *param (the pointed-to data) cannot be modified.