#include <iostream>
using namespace std;

// рекурсия: n вызовов до остановки -> O(n) по времени и O(n) по памяти (стек вызовов)
void countdown(int n)
{
	if (n <= 0)
		return;
	cout << n << " ";
	countdown(n - 1);
}

int main()
{
	countdown(5);
	cout << endl;
	return 0;
}
