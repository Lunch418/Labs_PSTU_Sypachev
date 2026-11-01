#include <iostream>
using namespace std;

// вложенный цикл: внешний n раз, внутренний всегда 10 раз -> O(10n) = O(n)
void printStars(int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			count++;
		}
	}
	cout << count;
}

int main()
{
	printStars(5);
	cout << endl;
	return 0;
}
