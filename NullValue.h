#pragma once
#include "Value.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

struct NullValue : Value
{
public:
	int getWeight();
	void display(int tabCount);
};