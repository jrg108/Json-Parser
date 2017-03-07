#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include "NumValue.h"

NumValue::NumValue()
{}

NumValue::NumValue(std::string input)
{
	internalNumber = std::stof(input);
}

int NumValue::getWeight()
{
	return 1;
}

void NumValue::display(int tabCount)
{
	std::cout << internalNumber;
}