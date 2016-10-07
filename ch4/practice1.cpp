#include <iostream>

using namespace std;

int main() {

	int age1;
	int age2;
	cout << "Enter the first age: " << '\n';
	cin >> age1;
	cout << "Enter the second age: " << '\n';
	cin >> age2;

	if (age1 > 100 && age2 > 100){
		cout << "Wow, that's old. \n";
	} else if (age1 < age2) {
		cout << "The second guy is older\n";
	} else {
		cout << "The first guy is older \n";
	}
}
