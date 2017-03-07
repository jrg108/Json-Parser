#pragma once
#include "Value.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

struct StringValue : Value
{
public:
	StringValue();
	StringValue(std::string input);
	int getWeight();
	void display(int tabCount);
	std::string internalString;
};