#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	// �������.
	double  x, y;
	cout << "\t�������.\n������� ��� �����: ";
	cin >> x >> y;
	double* px = &x;
	double* py = &y;
	// �����a.
	cout << "������� �������������� �������� ����� = " << (*px + *py) / 2 << endl;

	return 0;
}