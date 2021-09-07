#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char str[10];
	cin.getline(str, 10);
	const int len = strlen(str);
	char temp[10];
	for (int i = 0; i < len; i++)
	{
		temp[i] = str[len - 1 - i];
	}
	temp[len] = '\0';
	char* pch = strtok(temp, " ");
	int a = atoi(pch);
	pch = strtok(NULL, " ");
	int b = atoi(pch);
	if (a > b)
		printf("%d", a);
	else
		printf("%d", b);
	return 0;
}