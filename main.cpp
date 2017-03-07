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
			input = input + line + " ";
		}
		JsonObject* document = new JsonObject(input.substr(1, input.size() - 2));
		try 
		{
			document->display(0);
			std::cout << "Weight: " << document->getWeight() << endl;
		}
		catch(int e)
		{
			std::cout << "File not in correct JSON format" << endl;
		}
		
	}
	

	

	system("pause");
	return 0;
}