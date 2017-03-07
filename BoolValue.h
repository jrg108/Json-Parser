#pragma once
#include "Value.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

struct BoolValue : Value
{
public:
	BoolValue();
	BoolValue(bool input);
	int getWeight();
	void display(int tabCount);
	bool internalBool;
};