// C++ Week 4 Calulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Calc.h"
#include <iostream>

template <typename A> // does this need to be included in every file?

int main()
{
	string op;
	calculations<A> mycalc;

	cout << "Please enter two numbers one at a time! (Accepted numbers are decimals or whole numbers)" << endl;
	cin >> mycalc.num;
	cin >> mycalc.num2 << endl;


	cout << "Great work! Now please select an operator by typing one of the following: " << endl;
	cout << "(+, -, *, or /)";

	cin >> op;

	if (op == "+"){
		mycalc.add();
}
	if (op == "-") {
		mycalc.subt();
	}
	if (op == "/") {
		mycalc.div();
		}
	if (op == "*") {
		mycalc.mult();
	}

	if (op != "+", "-", "*", "/") {
		cout << "Please try again!";
	}
};
