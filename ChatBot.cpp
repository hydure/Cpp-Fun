#include <iostream>
#include <string>
using namespace std;

int main() {
	string name, age, favorite_food, pets;

	cout << "What is your name?\n";
	getline(cin, name);
	cout << "Nice to meet you " << name << "!\n";
	cout << "How old are you?\n";
	getline(cin, age);
	cout << "Cool, I am " << age << " too!\n";
	cout << "What is your favorite food?\n";
	getline(cin, favorite_food);
	cout << "Gross, I cannot stand " << favorite_food << "!\n";
	cout << "I have two cats, how about you?\n";
	getline(cin, pets);
	cout << "Awesome. Anyway I have got to go. Talk to you later!\n";
	cin.ignore();
	return 0;
}