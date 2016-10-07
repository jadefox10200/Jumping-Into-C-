#include <iostream>

using namespace std;

// Write a small calculator that takes as input one of the four arithmetic
// operations, the two arguments to those operations, and then prints out the
// result.

int main() {

	int a, b;
	char op;
	// scanf("%d%c%d", &a,&op,&b);
	cout << "Enter a first number: ";
	cin >> a;
	cout << "Enter a second number: ";
	cin >> b;
	cout << "Enter an operator: ";
	cin >> op;
	if (op == '+') {
		cout << a + b << endl;
	} else if (op == '*'){
		cout << a * b << endl;
	} else if (op == '-' ){
		cout << a - b << endl;
	}else if (op == '/') {
		cout << a / b << endl;
	} else {
		cout << "You didn't enter an operator I expected. " << endl;
	}
}
