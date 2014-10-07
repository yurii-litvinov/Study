#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	ifstream file("../test.txt", ios::in);
	if (!file.is_open())
	{
		cout << "File not found!" << endl;
		return 1;
	}

	vector<string> data;

	while (!file.eof()) {
		string buffer;
		file >> buffer;
		data.push_back(buffer);
	}

	file.close();

	for (string const &line : data)
	{
		cout << line << endl;
	}

	return 0;
}
