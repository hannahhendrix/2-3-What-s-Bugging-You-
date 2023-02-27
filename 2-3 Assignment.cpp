/*
 * Calculator.cpp
 *
 *  Date: [1/3/2023]
 *  Author: [Hannah Hendrix]
 */

#include <iostream>

using namespace std;

int main() //switched void to int
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'Y'; //char is decalred using single quotes, added semicolon
		while (answer == 'Y') //switched 'y' to 'Y' because they are different chars
		{
			cout << "Enter expression" << endl;
			cin >> op2 >> operation >> op1;
			if (operation == '+') { //added opening braces, removed semicolon, switched + to single quotes
				cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //switched >> to <<
			} //added closing braces
			if (operation == '-') {//added opening braces, removed semicolon
				cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //switched >> to <<
			} //added closing braces
			if (operation == '*') {//added open braces
				cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //added semicolon, switched operator to *
			} //added closing braces
			if (operation == '/') { //added opening braces
				cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; //switched operator to /
			} //added closing braces

			cout << "Do you wish to evaluate another expression? " << endl;
			cin >> answer;
		}
}

