#include <iostream>
#include <array>

// Function template taking parameter by value (causes array decay)
template<typename T>
void byValue(T param) {
    std::cout << "T deduced as: " << typeid(T).name() << std::endl;
}


// Function template taking parameter by reference (preserves array type)
template<typename T>
void byReference(T& param) {
    std::cout << "T deduced as: " << typeid(T).name() << std::endl;
}

// Function to deduce array size at compile time
template<typename T, std::size_t N>
constexpr std::size_t arraySize(T (&)[N]) noexcept {
    return N;
}

int main() {
    const char name[] = "J. P. Briggs"; // name's type is const char[13]

    // Demonstrating array decay into pointer
    const char *ptrToName = name;
    std::cout << "ptrToName points to: " << ptrToName << std::endl;

    // Template function call - by value (causes decay)
    byValue(name); // T deduced as: const char*
    
    // Template function call - by reference (preserves array type)
    byReference(name); // T deduced as: const char [13]

    // Using template to get array size at compile time
    int keyVals[] = {1, 3, 7, 9, 11, 22, 35 }; // keyVals has 7 elements
    std::cout << "Array size: " << arraySize(keyVals) << std::endl;
    
    // Using array size to create another array
    int mappedVals[arraySize(keyVals)]; // mappedVals has 7 elements
    
    // Modern approch using std::array
    std::array<int, arraySize(keyVals)> mappedValsModern;

    std::cout << "Size of mappedValsModern: " << mappedValsModern.size() << '\n';

}