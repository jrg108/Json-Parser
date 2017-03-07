#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include "StringValue.h"

StringValue::StringValue()
{}

StringValue::StringValue(std::string input)
{
	internalString = input;
}

int StringValue::getWeight()
{
	return 1;
}

void StringValue::display(int tabCount)
{
	std::cout << internalString;
}