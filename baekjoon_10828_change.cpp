#include <iostream>
#include<algorithm>
#include<array>
#include<string>
using namespace std;
void push(int* stack, int n);
int top(int* stack);
int empty(int* stack);
int size(int* stack);

void push(int* stack, int n)
{
	if (empty(stack))
		stack[0] = n;
	else
		stack[size(stack)] = n;
}

int top(int* stack)
{
	if (empty(stack))
		return -1;
	return stack[size(stack) - 1];
}
int empty(int* stack)
{
	if (stack[0] == 0) return 1;
	else return 0;
}
int size(int* stack)
{
	int size = 0;
	for (int i = 0; i < 10000; i++)
	{
		if (stack[i] == 0)
			return size;
		else size++;
	}
}

int pop(int* stack)
{
	if (empty(stack))
		return -1;
	int result = top(stack);
	stack[size(stack) - 1] = 0;
	return result;
}
int main(void)
{
	int stackArr[10000]{ 0 };
	int n;
	cin >> n;
	cin.ignore();
	string order;
	for (int i = 0; i < n; i++)
	{
		getline(cin, order);
		//push
		if (isdigit(order.back()) != 0)
		{
			string s;
			for (int j = 0; j < order.size(); j++)
			{
				if (order[j] >= '0' && order[j] <= '9')
					s = s + order[j];
			}
			push(stackArr, stoi(s));
		}
		else if (order == "pop")
			cout << pop(stackArr) << endl;
		else if (order == "size")
			cout << size(stackArr) << endl;
		else if (order == "empty")
			cout << empty(stackArr) << endl;
		else if (order == "top")
			cout << top(stackArr) << endl;
		else
			cout << "error" << endl;
	}
	return 0;
}