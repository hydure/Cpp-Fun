#include <iostream>
using namespace std;

int main() {
    int user_age, voting_age = 18;

    cout << "What is your age?"<< endl;
    cin >> user_age;

    if (user_age == voting_age){
        cout << "Yay! You finally get to vote!" << endl;
    }
    else if(user_age < voting_age){
        cout << "Then you are too young to vote." << endl;
    }
    else{
        cout << "Then you are old enough to vote." << endl;
    }

    return 0;
}