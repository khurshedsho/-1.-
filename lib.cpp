#include <iostream>
#include"math.h"
using std::cout, std::cin, std::endl;



int main()
{
	setlocale(LC_ALL, "RU");
	int x;
	int a, b;
	cout << "Введите первое число: ";
	cin >> a;
	cout << "Введите второе число: ";
	cin >> b;
	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): 5" << endl;
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "a + b = " << sum(a, b) << endl;
		break;
	case 2:
		cout << "a - b = " << minus(a, b) << endl;
		break;
	case 3:
		cout << "a * b = " << mult(a, b) << endl;
		break;
	case 4:
		cout << "a / b = " << divi(a, b) << endl;
		break;
	case 5:
		cout << "a ^ b = " << degrees(a, b) << endl;
		break;
	default:
		cout << "Ошибка! " << endl;
		break;
	}
	
	return 0;
}

