#include <iostream>
using namespace std;

/*
Key {

0 { Rock
1 { Paper
2{ Scissors

*/



int win_check(int inp_per, int inp_pc){

    int winner;



    //  User wins
    if (inp_per == 0 && inp_pc == 2){
        winner = 0;
        }
    if (inp_per == 1 && inp_pc == 0){
        winner = 0;
        }
    if (inp_per == 2 && inp_pc == 1){
        winner = 0;
        }

    // PC Wins
    if (inp_per == 2 && inp_pc == 0){
        winner = 1;
        }
    if (inp_per == 0 && inp_pc == 1){
        winner = 1;
        }
    if (inp_per == 1 && inp_pc == 2){
        winner = 1;
        }


    // Tie
    if (inp_per == 2 && inp_pc == 2){
        winner = 2;
        }
    if (inp_per == 1 && inp_pc == 1) {
        winner = 2;
        }
    if(inp_per == 0 && inp_pc == 0){
        winner = 2;
        }


    return winner;

}


int main(){


    bool game_end = false;

    cout << win_check(2,0) ;




    return 0;
}
