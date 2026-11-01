#include <iostream>
using namespace std;

// два последовательных (не вложенных) цикла: n раз + k раз -> O(n + k)
void f(int n, int k)
{
	int a = 1;
	for (int i = 0; i < n; i++)
	{
		a += i; // заглушка вместо "...." со слайда, O(1) за итерацию
	}
	for (int i = 0; i < k; i++)
	{
		a += i; // заглушка вместо "...." со слайда, O(1) за итерацию
	}
	a++;
	cout << a;
}

int main()
{
	f(5, 3);
	cout << endl;
	return 0;
}
