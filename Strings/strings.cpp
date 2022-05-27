#include <iostream>
using namespace std;

int main(){

    string phrase = "lol, this is cool";

    // Indexing
    cout << phrase[0] << endl;

    // Finding index where an elements starts in a string
    cout << phrase.find("cool") << endl;

    // Taking substring (start_ind, len_of_element)
    cout << phrase.substr(5, 4) << endl;

    return 0;
}