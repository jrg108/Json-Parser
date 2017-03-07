#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include "NullValue.h"




int NullValue::getWeight()
{
	return 1;
}

void NullValue::display(int tabCount)
{
	std::cout << "null";
}