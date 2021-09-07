#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	char str[1000001];
	cin.getline(str, 1000001);
	int count = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] == ' ')
			count++;
	}
	if (str[0] == ' ' || str[strlen(str)-1] == ' ')
		count--;
	printf("%d", count + 1);
	return 0;
}