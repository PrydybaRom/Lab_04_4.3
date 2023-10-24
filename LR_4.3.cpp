
// Lab_04_3.cpp
// <Придиба Роман Орестович>
// Лабораторна робота № 4.3
//Табуляція функції, заданої формулою: функція з параметрами
// Варіант 30

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, xp, xk, dx, F;

	cout << "a = "; cin >> a; // вхідний аргумент
	cout << "b = "; cin >> b; // вхідний аргумент
	cout << "c = "; cin >> c; // вхідний аргумент

	cout << "xp = "; cin >> xp; // вхідний аргумент
	cout << "xk = "; cin >> xk; // вхідний аргумент
	cout << "dx = "; cin >> dx; // вхідний аргумент
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp; // початкове значення циклу

	// початок циклу:
	while (x <= xk)
	{
		if (x < 3 && b != 0)
			F = (a * (x * x)) - (b * x) + c;

		else
			if (x > 3 && b == 0)
				F = (x - a) / (x - c);
			else
				F = (x / c);
			
		cout << "|" << setw(7) << setprecision(2) << F << " |" << endl;

		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}








