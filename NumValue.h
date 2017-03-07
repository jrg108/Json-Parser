#pragma once
#include "Value.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

struct NumValue : Value
{
public:
	NumValue();
	NumValue(std::string input);
	int getWeight();
	void display(int tabCount);
	double internalNumber;
};