#include <iostream>
#include <cmath>
#include <iomanip>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// вариант 25: y = (e^x - e^(-x)) / 2, ряд S = x + x^3/3! + x^5/5! + ...
	double a, b, eps;
	int k, n;
	cout << "Введите a, b, k (число шагов): ";
	cin >> a >> b >> k;
	cout << "Введите n (число членов для SN): ";
	cin >> n;
	cout << "Введите точность eps (для SE): ";
	cin >> eps;

	double h = (b - a) / k;
	cout << fixed << setprecision(6);

	for (int j = 0; j <= k; j++)
	{
		double x = a + j * h;

		// сумма по заданному числу членов n
		double term = x;
		double sn = term;
		for (int i = 0; i < n - 1; i++)
		{
			term *= x * x / ((2.0 * i + 2) * (2.0 * i + 3));
			sn += term;
		}

		// сумма по заданной точности eps
		term = x;
		double se = term;
		int i = 0;
		while (fabs(term) >= eps)
		{
			term *= x * x / ((2.0 * i + 2) * (2.0 * i + 3));
			se += term;
			i++;
		}

		double y = sinh(x);

		cout << "X=" << x << "  SN=" << sn << "  SE=" << se << "  Y=" << y << endl;
	}

	return 0;
}
