#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// вариант 25, n и m вводим с клавиатуры для каждого выражения отдельно
	int n, m;

	cout << "Введите n и m: ";
	cin >> n >> m;
	int r1 = --m - ++n;
	cout << "1) --m - ++n = " << r1 << endl;

	cout << "Введите n и m: ";
	cin >> n >> m;
	bool r2 = m * n < n++;
	cout << "2) m*n < n++ = " << r2 << endl;

	cout << "Введите n и m: ";
	cin >> n >> m;
	bool r3 = n-- > m++;
	cout << "3) n-- > m++ = " << r3 << endl;

	return 0;
}
