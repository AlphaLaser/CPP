 #include <iostream>
 #include <cmath>
 using namespace std;
 
 int main(){

    // Simple Operation
    cout << 10%2 << endl;

    // Incrementing/Decrement with a++/a--
    int a = 5;
    a++ ;
    cout << a << endl;
    a--;
    cout << a << endl;

    // C-Math Operations
    cout << pow(2, 5) << endl; // 2^5
    cout << round(3.4) << endl; // Rounds
    cout << fmax(3, 10) << endl; // Biggest no. of the two
    cout << fmin(3,10) << endl; // Smallest no. of te two

    

    return 0;
 }