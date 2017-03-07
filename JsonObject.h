#pragma once
#include "Value.h"

struct JsonObject : Value
{
public:
	JsonObject();
	JsonObject(std::string input);
	int getWeight();
	void display(int);
private:
	std::vector<Value*> strings;
	std::vector<Value*> values;
	

};