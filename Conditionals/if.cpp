#include <iostream>
using namespace std;

// All Functions
int add(int a, int b); // a + b
int subtract(int a, int b); // a - b
int multiply(int a, int b); // a * b
int divide(int a, int b); // a / b

// Main Function
int main(){

    cout << add(2, 3) << ", " << subtract(5, 2) << ", " << multiply(9, 8) << ", " << divide(8, 2) << endl;

    return 0;
}

// Function Definitions

// Addition
int add(int a, int b){
    return a + b;
}

// Subtraction
int subtract(int a, int b){
    return a - b;
}

// Multiplication
int multiply(int a, int b){
    return a*b;
}

// Division
int divide(int a, int b){
    return a / b;
}
