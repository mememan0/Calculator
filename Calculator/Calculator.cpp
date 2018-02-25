// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const char * expressionToParse;

char peek() {

	return *expressionToParse;
}

char get() {
	return *expressionToParse++;
}

int calculate();

int number()
{
	int result = get() - '0';
	while (peek() >= '0' && peek() <= '9')
	{
		result = 10 * result + get() - '0';
	}
	return result;
}

int factor()
{
	if (peek() >= '0' && peek() <= '9')
		return number();
	else if (peek() == '(')
	{
		get(); // '('
		int result = calculate();
		get(); // ')'
		return result;
	}
	else if (peek() == '-')
	{
		get();
		return -factor();
	}
	return 0; // error
}

int term()
{
	int result = factor();
	while (peek() == '*' || peek() == '/')
		if (get() == '*')
			result *= factor();
		else
			result /= factor();
	return result;
};

int calculate() {

	int result = term();
	while (peek() == '+' || peek() == '-')
		if (get() == '+')
			result += term();
		else
			result -= term();
	return result;
}
int main()
{
	string input;
	cout << "Input Number To Do Maths On:";
	cin >> input;
	expressionToParse = (input.c_str());
	int result = calculate();
	cout << result;
	cin >> input;
}
