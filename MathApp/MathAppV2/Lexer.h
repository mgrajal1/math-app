#pragma once
#include <string>
#include <vector>

using namespace std;

class Lexer
{
public:
	Lexer(string entry);
	~Lexer();
	void start();

private:
	const int NUMBER = 0, DECIMAL = 1, FRACTION = 2;

	string entry;
	vector<string> entries;
	bool startState(int index, string entryRead);
	bool numberState(int index, string entryRead);
	bool decimalPointState(int index, string entryRead);
	bool decimalState(int index, string entryRead);
	bool fractionSeparatorState(int index, string entryRead);
	bool fractionState(int index, string entryRead);
	bool decimalPointFractionState(int index, string entryRead);
	bool decimalFractionState(int index, string entryRead);
	bool operatorPlusState(int index, string entryRead);
	bool operatorMinusState(int index, string entryRead);
	bool operatorTimes(int index, string entryRead);
	bool operatorBetween(int index, string entryRead);
	bool operatorPower(int index, string entryRead);
	bool operatorModule(int index, string entryRead);
	bool endState();
	bool errorState();
	bool consume(int index, string entryRead, int type);
};
