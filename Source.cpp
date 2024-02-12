#include<iostream>
#include<math.h>
#include <cmath>
#include<conio.h>
#define _USE_MATH_DEFINES
using namespace std;

double triangle_area_calculator(int b, int h)
{
	double S;
	S = 0.5 * b * h;
	return S;
}
int parallelepiped_volume_calculator(int l, int w, int h)
{
	int V;
	V = l * w * h;
	return V;
}
double circumference_calculator(int r)
{
	float pi = 3.14;
	int C;
	C = 2 * pi * r;
	return C;
}
bool is_even(int number)
{
	//number = 0;
	if (number % 2 == 0)
	{
		return true;
	}
	else
		return false;
}
int max_number(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
		return num2;
}
bool is_prime(int number)
{
	int k = 0;
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			k = k + 1;
		}
	}
	if (k == 2)
	{
		return true;
	}
	else
		return false;
}
int sum_of_digits(int n)
{
	int s = 0;
	while (n != 0) {
		//int s = 0;
		int a = n % 10;
		s = s + a;
		n = n / 10;
		sum_of_digits(n);
	}
	return s;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int j = 0, b, h, l, w, r, number, num1, num2, n;
	while (_getch() != 27)
	{
		cout << "Введите номер функции:" << endl;
		cin >> j;
		system("cls");
		switch (j)
		{
		case 1:
			cout << "Введите длину основания и высоту:" << endl;
			cin >> b >> h;
			cout << triangle_area_calculator(b,h) << endl;
			break;
		case 2:
			cout << "Введите длину, ширину и высоту:" << endl;
			cin >> l >> w >> h;
			cout << parallelepiped_volume_calculator(l, w, h) << endl;
			break;
		case 3:
			cout << "Введите радиус:" << endl;
			cin >> r;
			cout << circumference_calculator(r) << endl;
			break;
		case 4:
			cout << "Введите число:" << endl;
			cin >> number;
			cout << is_even(number) << endl;
			break;
		case 5:
			cout << "Введите два числа:" << endl;
			cin >> num1 >> num2;
			cout << max_number(num1,num2) << endl;
			break;
		case 6:
			cout << "Введите число:" << endl;
			cin >> number;
			cout << is_prime(number) << endl;
			break;
		case 7:
			cout << "Введите число:" << endl;
			cin >> n;
			cout << sum_of_digits(n) << endl;
			break;
		default:
			cout << "Такой функции нет!" << endl;
		}
	}
	return 0;
}
