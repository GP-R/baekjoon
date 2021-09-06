#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[1000001];
	scanf("%s", s);

	const int len = 'z' - 'a' + 1;
	int count[len]; //= 122 - 97 + 1= 26 
	for (int i = 0; i < strlen(s); i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (s[i] == 'a' + j || s[i] == 'A' + j)
			{
				count[j]++;
				break;
			}
		}
	}
	int max = count[0];
	for (int i = 0; i < len; i++)
	{
		if (max < count[i])
			max = count[i];
	}
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (max == count[i] && count[i] == count[j])
			{
				printf("?");
				return 0;
			}
		}
	}
	for (int i = 0; i < len; i++)
	{
		if (max == count[i])
			printf("%c", 'A' + i);
	}

	return 0;
}