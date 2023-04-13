#include <iostream>
using namespace std;


template <typename A> class calculations {
public:
	calculations() {} //default constructor
	//calculations(A input1, A input2) { //constructor passing in template values

	A num; //template variables that the user can store the desired numbers to use in the calculator and that we can pass into functions
	A num2;

	A add() //function for addition ----- all set up to recieve template variables aka - variables of any type
	{
		return num + num2;
	}

	A subt() //function for subtraction
	{
		return num - num2;
	}

	A mult() //function for multiplication
	{
		return num * num2;
	}

	A div() //function for division
	{
		return num / num2;
	}


};