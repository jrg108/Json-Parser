#pragma once
#include "Value.h"

struct JsonObject : Value
{
public:
	JsonObject();
	JsonObject(std::string input);
	int getWeight();
	void display(int);
	//void Add(std::string stringKey, Value* value);
private:
	std::vector<Value*> strings;
	std::vector<Value*> values;
	

};