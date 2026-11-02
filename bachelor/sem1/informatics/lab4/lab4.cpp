#include <iostream>
#include <locale.h>
using namespace std;

const int N = 100;

void printRing(int a[], int n, int k)
{
	// идем от k-го элемента справа налево (по убыванию индекса), по кольцу
	for (int cnt = 0; cnt < n; cnt++)
	{
		int idx = ((k - cnt) % n + n) % n;
		cout << a[idx] << " ";
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	// вариант 25: однонаправленное кольцо, просмотр справа налево
	int n;
	cout << "Введите количество элементов: ";
	cin >> n;

	int a[N];
	cout << "Введите элементы массива: ";
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int k;
	cout << "Введите индекс K: ";
	cin >> k;

	cout << "Кольцо от K до K+1 (справа налево): ";
	printRing(a, n, k);

	// сортировка по убыванию
	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - 1 - i; j++)
			if (a[j] < a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
	cout << "После сортировки по убыванию: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	// удаление нечетных элементов
	int m = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0)
			a[m++] = a[i];
	n = m;
	cout << "После удаления нечетных элементов: ";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;

	if (n > 0)
	{
		k = ((k % n) + n) % n;
		cout << "Кольцо от K до K+1 после изменений: ";
		printRing(a, n, k);
	}
	else
	{
		cout << "Массив пуст." << endl;
	}

	return 0;
}
