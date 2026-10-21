#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// вариант 25: ((a-b)^3 - (a^3 - 3a^2b)) / (b^3 - 3ab^2)
	float af, bf;
	cout << "Введите a и b (float): ";
	cin >> af >> bf;
	float numf = pow(af - bf, 3) - (pow(af, 3) - 3 * af * af * bf); // числитель
	float denf = pow(bf, 3) - 3 * af * bf * bf; // знаменатель
	float resf = numf / denf;

	double ad, bd;
	cout << "Введите a и b (double): ";
	cin >> ad >> bd;
	double numd = pow(ad - bd, 3) - (pow(ad, 3) - 3 * ad * ad * bd); // числитель
	double dend = pow(bd, 3) - 3 * ad * bd * bd; // знаменатель
	double resd = numd / dend;

	// выводим оба результата чтобы сравнить float и double
	cout << "float: " << resf << endl;
	cout << "double: " << resd << endl;

	return 0;
}
