#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char str[101];
	scanf("%s", str);
	int result = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == 'c' && str[i + 1] == '=')
			result++;
		if (str[i] == 'c' && str[i + 1] == '-')
			result++;
		if (str[i] == 'c' && str[i + 1] != '=' && str[i + 1] != '-')
			result++;
		if (str[i] == 'd' && str[i + 1] == '-')
		{
			result++; 
			continue;
		}
		if (str[i] == 'l' && str[i + 1] == 'j')
			result++; 
		if (str[i] == 'n' && str[i + 1] == 'j')
			result++;
		if (str[i] == 's' && str[i + 1] == '=')
			result++; 
		if (i == 0)
		{
			if (str[0] == 'z' && str[1] == '=')
				result++;
		}
		if (i > 0)
		{
			if (str[i - 1] != 'd' && str[i] == 'z' && str[i + 1] == '=')
			{
				result++;
				continue;
			}
		}
		if (i < strlen(str) - 1)
		{
			if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
			{
				result++;
				continue;
			}
		}
		if (str[i] == 'd')
		{
			if (str[i + 1] == 'z' && str[i + 2] != '=')
				result++;
			else if (str[i + 1] != 'z')
				result++;
			else if (str[i + 1] != '-')
				result++;
		}

		if (i == 0)
		{
			if (str[0] == 'j')
				result++;
		}
		if (i > 0)
		{
			if (str[i] == 'j' && str[i - 1] != 'l' && str[i - 1] != 'n')
				result++;
		}
		if (str[i] == 'l' && str[i + 1] != 'j')
			result++;
		if (str[i] == 'n' && str[i + 1] != 'j')
			result++;
		if (str[i] == 's' && str[i + 1] != '=')
			result++;
		if (str[i] == 'z' && str[i + 1] != '=')
			result++;
		if (str[i] == 'a' || str[i] == 'b' 
			|| str[i] == 'e' || str[i] == 'f' || str[i] == 'g' || str[i] == 'h'
			|| str[i] == 'i' || str[i] == 'k' || str[i] == 'm'
			|| str[i] == 'o' || str[i] == 'p' || str[i] == 'q' || str[i] == 'r'
			|| str[i] == 't' || str[i] == 'u' || str[i] == 'v' 
			|| str[i] == 'w' || str[i] == 'x' || str[i] == 'y')
			result++;
	}


	printf("%d", result);
	return 0;
}
/*
int i = 0;
while (str[i] != NULL)
{

	result++;
}*/