#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "ru");

	// Задание.
	double  x, y;
	cout << "\tЗадание.\nВведите два числа: ";
	cin >> x >> y;
	double* px = &x;
	double* py = &y;
	// Задачa.
	cout << "Среднее арифметическое введеных чисел = " << (*px + *py) / 2 << endl;

	return 0;
}