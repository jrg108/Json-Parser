#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Value.h"
#include "JsonObject.h"


using namespace std;

int main(int argc, char* argv[])
{
	ifstream file;
	string input;
	string line;

	if (argc = 2)
	{
		file.open(argv[1]);
		while (getline(file, line))
		{
			input = input + " ";
		}
		JsonObject* document = new JsonObject(input.substr(1, input.size() - 2));
		//jsonParse(input, document);
	}
	

	

	system("pause");
	return 0;
}