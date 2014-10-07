#include <stdio.h>

int main()
{
	FILE *file = fopen("../test.txt", "r");
	if (!file)
	{
		printf("file not found!");
		return 1;
	}

	char *data[100] = {};

	int linesRead = 0;
	while (!feof(file))
	{
		char *buffer = new char[100];
		int const readBytes = fscanf(file, "%s", buffer);
		if (readBytes < 0)
		{
			break;
		}

		data[linesRead] = buffer;
		++linesRead;
	}

	fclose(file);

	for (int i = 0; i < linesRead; ++i)
	{
		printf("%s\n", data[i]);
	}

	for (int i = 0; i < linesRead; ++i)
	{
		delete[] data[i];
	}

	return 0;
}
