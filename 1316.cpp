#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<cstring>

using namespace std;
int main()
{
	int n;
	char str[101];
	scanf("%d", &n);

	if (n > 101)
		return 0;
	int result = 0;
	bool b;
	for (int i = 0; i < n; i++)
	{
		scanf("%s", str);
		b = true;
		//�ܾ� �Ѱ����� ���ӵƴ��� Ȯ���Ŀ� ���� �ȵ������� �� ��������� �׷� �ܾ �ƴϴ�.
		if (strlen(str) == 1)
		{
			result++;
			continue;
		}
		else if (strlen(str) == 2)
		{
			if (str[0] != str[1])
			{
				result++;
				continue;
			}
			else
				continue;
		}
		else // ���ڿ� ���� 3�̻�
		{
			for (int j = 0; j < strlen(str); j++)
			{
				int k = j;
				char c = str[j];
				while (str[k] == str[k + 1] && str[k] != NULL)
				{
					j++;
					c = str[k];
					k++;
				} // while���� ������ �� ���� �ܾ ���ӵ� �ܾ �ƴϰų� null������

				for (int l = k+1; l < strlen(str); l++)
				{
					if (c == str[l]) // �տ��� ���Դ� �ܾ ���߿� �� ���Ա� ������ �׷� �ܾ �ƴ�
					{
						b = false;
					}
				}
				if (b == false)
					break;
			}
		}
		if (b == true)
			result++;
	}
	printf("%d", result);
	return 0;
}