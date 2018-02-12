#include <iostream>
using namespace std;

int main() {
    int first_number, second_number;

    cout << "Give me a number: ";
    // use getline() for strings and cin for numbers
    cin >> first_number;
    cout << "Give me a second number: ";
    cin >> second_number;
    // endl ends the line as well
    cout << "The sum of the two numbers is: " << first_number + second_number << endl
         << "The difference of the two numbers is: " << first_number - second_number << endl
         << "The product of the two numbers is: " << first_number * second_number << endl
         << "The quotient of the two numbers is: " << first_number / second_number << endl
         << "with a remainder of: " << first_number % second_number << endl;
    return 0;
}