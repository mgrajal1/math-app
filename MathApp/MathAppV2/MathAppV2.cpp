// MathAppV2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "Lexer.h"

using namespace std;


int main()
{
	string entry;
	getline(cin, entry);
	Lexer l(entry);
	l.start();
	system("pause");
	return 0;
}

