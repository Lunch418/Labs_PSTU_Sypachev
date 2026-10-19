#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// вариант 25: сумма 7 членов ряда an = n^2 * e^(-sqrt(n))
	double sum = 0;
	for (int n = 1; n <= 7; n++)
	{
		double an = n * n * exp(-sqrt((double)n));
		sum += an;
	}

	cout << "sum = " << sum << endl;

	return 0;
}
