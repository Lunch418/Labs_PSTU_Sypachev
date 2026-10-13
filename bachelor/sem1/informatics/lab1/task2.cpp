#include <iostream>
using namespace std;

int main()
{
	// вариант 25, берем произвольные n и m чтобы проверить выражения
	int n = 5, m = 3;
	int r1 = --m - ++n;
	cout << "1) --m - ++n = " << r1 << endl;

	n = 5, m = 3;
	bool r2 = m * n < n++;
	cout << "2) m*n < n++ = " << r2 << endl;

	n = 5, m = 3;
	bool r3 = n-- > m++;
	cout << "3) n-- > m++ = " << r3 << endl;

	return 0;
}
