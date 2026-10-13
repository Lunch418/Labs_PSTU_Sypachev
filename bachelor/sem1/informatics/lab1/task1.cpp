#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// вариант 25: ((a-b)^3 - (a^3 - 3a^2b)) / (b^3 - 3ab^2), a=1000, b=0.0001
	float af = 1000, bf = 0.0001;
	float numf = pow(af - bf, 3) - (pow(af, 3) - 3 * af * af * bf); // числитель
	float denf = pow(bf, 3) - 3 * af * bf * bf; // знаменатель
	float resf = numf / denf;

	double ad = 1000, bd = 0.0001;
	double numd = pow(ad - bd, 3) - (pow(ad, 3) - 3 * ad * ad * bd); // числитель
	double dend = pow(bd, 3) - 3 * ad * bd * bd; // знаменатель
	double resd = numd / dend;

	// выводим оба результата чтобы сравнить float и double
	cout << "float: " << resf << endl;
	cout << "double: " << resd << endl;

	return 0;
}
