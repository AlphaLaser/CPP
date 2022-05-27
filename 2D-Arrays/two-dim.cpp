#include <iostream>
using namespace std;

int main(){

    // 2D Array
    int arr[2][3] = {

            {2,2,3},
            {4,5,6}
    };

    // Nested For-Loop
    for(int i = 0; i<2; i++){
        for(int x = 0; x < 3; x++){
            cout << arr[i][x] << endl;
        };
        cout << "\n---- End of Row ----\n" << endl;
    };


    return 0;
}
