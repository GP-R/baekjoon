#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
	{
		printf("-1");
		return 0;
	}

	int x = a / (c - b) + 1;
	printf("%d", x);
	return 0;
}
