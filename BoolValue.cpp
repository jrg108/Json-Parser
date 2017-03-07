#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include "BoolValue.h"

BoolValue::BoolValue()
{}

BoolValue::BoolValue(bool input)
{
	internalBool = input;
}

int BoolValue::getWeight()
{
	return 1;
}

void BoolValue::display(int tabCount)
{
	if(internalBool)
		std::cout << "true";
	else
		std::cout << "false";
	
}