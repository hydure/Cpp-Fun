#include <iostream>
#include <string>

/* So I don't have to put 'std::'
   in front of everything, woo.   */
using namespace std;

int main() {
	string name;
	cout << "Hello World!\n";
	cout << "What is your name?\n";
	getline(cin, name);
	cout << "Nice to meet you, " << name << "!\n"
		<< "Your name has " << name.length() << " letters.\n"
		<< "Your name starts with the letter \"" << name.front() << "\".\n"
		<< "Your name ends with the letter \"" << name.back() << "\".\n";
	name.append(" the Great");
	cout << "Your name is now " << name << ".";
	cin.ignore();
	return 0;
}