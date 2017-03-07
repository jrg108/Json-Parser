#pragma once

struct Value
{
public:
	virtual int getWeight() = 0;
	virtual void display(int tabCount) = 0;
};
