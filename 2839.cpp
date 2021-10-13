#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if (n < 3 && n > 5000)
		return 0;

	int num5 = 0;
	int num3 = 0;
	while (n-3*num3 != 0)
	{
		if ((n - 3 * num3) % 5 == 0)
		{
			num5 = (n - 3 * num3) / 5;
			break;
		}

		num3++;
		if (n < 3 * num3)
		{
			cout << -1;
			return 0;
		}
	}

	cout << num5 + num3;
	return 0;
}