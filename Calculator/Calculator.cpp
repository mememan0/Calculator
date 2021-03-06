// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

const char * expressionToParse;

char currentChar() {

	return *expressionToParse;
}

char getNextChar() {
	return *expressionToParse++;
}

int calculate();

int number()
{
	int result = getNextChar() - '0';
	while (currentChar() >= '0' && currentChar() <= '9')
	{
		result = 10 * result + getNextChar() - '0';
	}
	return result;
}

int factor()
{
	if (currentChar() >= '0' && currentChar() <= '9')
		return number();
	else if (currentChar() == '(')
	{
		getNextChar(); // '('
		int result = calculate();
		getNextChar(); // ')'
		return result;
	}
	else if (currentChar() == '-')
	{
		getNextChar();
		return -number();
	}
	return 0; // error
}

int term()
{
	int result = factor();
	while (currentChar() == '*' || currentChar() == '/')
		if (getNextChar() == '*')
			result *= factor();
		else
			result /= factor();
	return result;
};

int calculate() {

	int result = term();
	while (currentChar() == '+' || currentChar() == '-')
		if (getNextChar() == '+')
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
	double result = calculate();
	cout << result;
	cin >> input;
}
