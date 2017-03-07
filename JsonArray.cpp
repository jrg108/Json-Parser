#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include "JsonArray.h"
#include "JsonObject.h"
#include "StringValue.h"
#include "NumValue.h"
#include "BoolValue.h"
#include "NullValue.h"

JsonArray::JsonArray(std::string input)
{
	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == '"')
		{
			int start = i;
			for (i = i + 1; i < input.size(); i++)
			{
				if (input[i] == '"' && input[i - 1] != '\\')
					break;
			}
			values.push_back(new StringValue(input.substr(start + 1, i - start - 1)));
		}
		else if (input[i] == '{')
		{
			int start = i;
			int leftBrakets = 1, rightBrakets = 0;
			//used to make sure the closing brace is actually the end of an object and not inside a string
			bool insideQuotations = false;
			while (leftBrakets != rightBrakets)
			{
				++i;

				if (input[i] == '{' && !insideQuotations)
					leftBrakets++;
				else if (input[i] == '}' && !insideQuotations)
					rightBrakets++;
				//also must make sure previous symbol is not \ or else this quotation is not the start or end of a string
				else if (input[i] == '"' && input[i - 1] != '\\')
				{
					if (insideQuotations)
						insideQuotations = false;
					else
						insideQuotations = true;
				}
			}
			values.push_back(new JsonObject(input.substr(start + 1, i - start - 1)));
		}
		else if (input[i] == '[')
		{
			int start = i;
			int leftBrakets = 1, rightBrakets = 0;
			//used to make sure the closing brace is actually the end of an object and not inside a string
			bool insideQuotations = false;
			while (leftBrakets != rightBrakets)
			{
				++i;

				if (input[i] == '[' && !insideQuotations)
					leftBrakets++;
				else if (input[i] == ']' && !insideQuotations)
					rightBrakets++;
				//also must make sure previous symbol is not \ or else this quotation is not the start or end of a string
				else if (input[i] == '"' && input[i - 1] != '\\')
				{
					if (insideQuotations)
						insideQuotations = false;
					else
						insideQuotations = true;
				}
			}
			values.push_back(new JsonArray(input.substr(start + 1, i - start - 1)));
		}
		else if (std::isdigit(input[i]))
		{
			std::string temp;
			while (std::isdigit(input[i]) || input[i] == '.')
			{
				temp += input[i];
				i++;
			}
			values.push_back(new NumValue(temp));
		}
		else if (input.substr(i, 4) == "true")
		{
			values.push_back(new BoolValue(true));
		}
		else if (input.substr(i, 5) == "false")
		{
			values.push_back(new BoolValue(true));
		}
		else if (input.substr(i, 4) == "null")
		{
			values.push_back(new NullValue());
		}
	}
}
JsonArray::JsonArray()
{

}


int JsonArray::getWeight()
{
	int weight = 1;
	for (int i = 0; i < values.size(); i++)
	{
		weight += values[i]->getWeight();
	}

	return weight;
}

void JsonArray::display(int tabCount = 0)
{
	std::cout << std::endl;
	for (int i = 0; i < tabCount; i++)
		std::cout << " ";
	std::cout << "[";
	tabCount++;
	for (int i = 0; i < values.size(); i++)
	{
		values[i]->display(tabCount);
		if (i < values.size() - 1)
			std::cout << ", ";
	}
	for (int i = 0; i < tabCount - 1; i++)
		std::cout << " ";
	std::cout << "]";
	std::cout << std::endl;
}