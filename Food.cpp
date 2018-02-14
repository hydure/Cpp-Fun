#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {

    // gives a pseudorandom number when rand() is called
    srand(time(NULL));
    string favoriteFood;
    cout << "What is your favorite food?\n";
    getline(cin, favoriteFood);
    cout << "I will give you " 
         << rand() % 10 << " " << favoriteFood 
         << " for your birthday!\n";
    return 0;
}