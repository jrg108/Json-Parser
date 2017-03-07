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
	internalNumber = std::stoi(input);
}

int NumValue::getWeight()
{
	return 1;
}

void NumValue::display(int tabCount)
{

}