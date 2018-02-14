#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double first_number, second_number;

    // sets precision to two decimal places
    cout << setprecision(2) << fixed;

    cout << "Give me a number: ";
    // use getline() for strings and cin for numbers
    cin >> first_number;
    cout << "Give me a second number: ";
    cin >> second_number;
    // endl ends the line as well
    cout << first_number << " + " << second_number << " = " << first_number + second_number << endl
         << first_number << " - " << second_number << " = " << first_number - second_number << endl
         << first_number << " * " << second_number << " = " << first_number * second_number << endl
         << first_number << " / " << second_number << " = " << first_number / second_number << endl;
    return 0;
}