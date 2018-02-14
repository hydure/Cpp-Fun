#include <iostream>
using namespace std;

int main() {
    int user_number, correct_answer = 4;

    cout << "What is 2+2?"<< endl;
    cin >> user_number;

    if (user_number == correct_answer){
        cout << "Correct answer!" << endl;
    }
    else{
        cout << "Wrong answer, 2+2=4!" << endl;
    }

    return 0;
}