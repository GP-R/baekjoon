#include<iostream>


using namespace std;
int main()
{
	int n;
	cin >> n;

	int num;
	int pnc = 0;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> num;
		for (int j = 1; j <= num; j++)
		{
			if (num % j == 0)
				pnc++;
			if (pnc > 2)
				break;
		}
		if (pnc == 2)
			result++;
		pnc = 0;
	}
	cout << result;
	return 0;
}