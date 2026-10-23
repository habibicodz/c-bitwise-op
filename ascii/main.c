#include "stdio.h"
#include "string.h"

int calculateLength(char *str);
void capitalize(char *str);
void smallerize(char *str);
void flipCapitalization(char *str);

int main(int argc, char const *argv[])
{
	char name[] = "HeLLo wOrld";
	smallerize(name);
	capitalize(name);
	flipCapitalization(name);

	printf("%s\n", name);
	fflush(stdout);
	return 0;
}

void capitalize(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		str[index] = str[index] & ~0x20;
		index++;
	}
}

void flipCapitalization(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		str[index] = str[index] ^ 0x20;
		index++;
	}
}

void smallerize(char *str)
{
	int index = 0;
	while (str[index] != '\0')
	{
		str[index] = str[index] |= 0x20;
		index++;
	}
}

int calculateLength(char *str)
{
	int index = 0;
	char ch = '\0';
	while ((ch = str[index]) != '\0')
	{
		index++;
		printf("%c", ch);
	}

	return index;
}