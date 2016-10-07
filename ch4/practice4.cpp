#include <iostream>

using namespace std;

// Expand the password checking program from earlier in this chapter and make
// it take multiple usernames, each with their own password, and ensure that the
// right username is used for the right password. Provide the ability to prompt
// users again if the first login attempt failed. Think about how easy(or hard) it is
// to do this for a lot of suernames and passwords.
int main() {

	string username;
	string password;
	cout << "Enter your username: " << "\n";
	getline( cin, username, '\n');
	cout << "Enter your password: " << "\n";
	getline( cin, password, '\n');
	if (username == "root" &&  password == "xyzzy" ){
		cout << "Access allowed" << "\n";
	} else {
		cout << "Bad username or password. Try again!" << "\n";
		cout << "Enter your password: " << "\n";
		getline( cin, password, '\n');
		if (username == "root" &&  password == "xyzzy" ){
			cout << "Access allowed" << "\n";
		} else {
			cout << "Bad username or password. Denied access!" << "\n";
		}
	}

	cout << "Enter your username: " << "\n";
	getline( cin, username, '\n');
	cout << "Enter your password: " << "\n";
	getline( cin, password, '\n');
	if (username == "root" &&  password == "xyzzy" ){
		cout << "Access allowed" << "\n";
	} else {
		cout << "Bad username or password. Try again!" << "\n";
		cout << "Enter your password: " << "\n";
		getline( cin, password, '\n');
		if (username == "secondRoot" &&  password == "hello" ){
			cout << "Access allowed" << "\n";
		} else {
			cout << "Bad username or password. Denied access!" << "\n";
		}
	}
}
