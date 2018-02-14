#include <iostream>
using namespace std;

int main() {
    char answer;

    cout << "Would you like some cake? (y/n)" << endl;
    cin >> answer;

    if (answer == 'y'){
        int number;
        cout << "How many pieces do you want?" << endl;
        cin >> number;
        cout << "Here is your " << number << " pieces of cake!" << endl;
    }
    else {
        cout << "Why are you in my cake shop?" << endl;
    }
}