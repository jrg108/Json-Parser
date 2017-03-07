#pragma once
#include "Value.h"

struct JsonArray : Value
{
public:
	JsonArray();
	JsonArray(std::string input);
	int getWeight();
	void display(int);
	//void Add(std::string stringKey, Value* value);
private:
	std::vector<Value*> values;


};