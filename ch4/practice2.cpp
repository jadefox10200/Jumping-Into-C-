#include <iostream>

using namespace std;


//Implement a simple "password" system that takes a password in the form of a
// number. Make it so that either of two numbers is valid, but use only one
// if statement to do the check.

int main() {

	int password;
	cout << "Enter your password: ";
	cin >> password;
	if (password == 5 || password == 9){
		cout << "Access granted\n";
	} else {
		cout << "Access denied\n";
	}
}
