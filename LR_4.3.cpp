
// Lab_04_3.cpp
// <������� ����� ���������>
// ����������� ������ � 4.3
//��������� �������, ������ ��������: ������� � �����������
// ������ 30

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double a, b, c, x, xp, xk, dx, F;

	cout << "a = "; cin >> a; // ������� ��������
	cout << "b = "; cin >> b; // ������� ��������
	cout << "c = "; cin >> c; // ������� ��������

	cout << "xp = "; cin >> xp; // ������� ��������
	cout << "xk = "; cin >> xk; // ������� ��������
	cout << "dx = "; cin >> dx; // ������� ��������
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp; // ��������� �������� �����

	// ������� �����:
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








