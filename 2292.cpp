#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	int a;
	scanf("%d", &a);
	int count = 0;
	int x = 0;
	int y = 0;
	if (a == 1)
	{
		printf("1");
		return 0;
	}
	while (true)
	{
		x += count * 6; // 0 6 18
		y += (count + 1) * 6;//6 18
		if (a >= 2 + x && a <= 1 + y) // 2~7 8~19
		{
			printf("%d", count + 2);
			break;
		}
		count++;
	}
	// 1 -> 6 -> 12 -> 18 -> 24 -> 30
	// a�� 2~7�����ϰ�� 2 
	// a�� 8~19�����ϰ�� 3
	// a�� 20~37�����ϰ�� 4
	return 0;
}
