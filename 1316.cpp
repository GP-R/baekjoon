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
		//단어 한개마다 연속됐는지 확인후에 연속 안돼있지만 또 나왔을경우 그룹 단어가 아니다.
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
		else // 문자열 길이 3이상
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
				} // while문이 끝나면 그 다음 단어가 연속된 단어가 아니거나 null문자임

				for (int l = k+1; l < strlen(str); l++)
				{
					if (c == str[l]) // 앞에서 나왔던 단어가 나중에 또 나왔기 때문에 그룹 단어가 아님
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