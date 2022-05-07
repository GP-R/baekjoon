#include<iostream>


using namespace std;
int main()
{
	int n , m;
	cin >> n;
	cin >> m;
	int pnc = 0;
	int result = 0;
	int min = 10001;
	for (int i = n; i <= m; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				pnc++;
		}
		if (pnc == 2)
		{
			result += i;
			if (min > i)
				min = i;
		}
		pnc = 0;
	}
	if (result == 0)
		cout << -1;
	else
	{
		cout << result << endl;
		cout << min << endl;
	}
	return 0;
}