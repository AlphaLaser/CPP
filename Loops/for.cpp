#include <iostream>
using namespace std;

int power(int base, int power){

    int x = base;

    for(int i=2; i <= power; i++){
        base = base*x;

    }

    return base;

}

int main(){

    cout << power(2, 5);


    return 0;
}
