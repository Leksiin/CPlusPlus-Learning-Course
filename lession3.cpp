#include <iostream>
#include <locale>
#include <Windows.h>
#include <cmath>
using namespace std;
//int main()
//{
//    cout << "Hello World!\n";
//    int a, b;
//    cin >> a >> b;
//    if (a > b) 
//    {
//        // Код будет выполняться если a больше b
//    }
//    else if (a == 0 && b == 0)
//    {
//        // Код будет выполняться если a и b равны 0. Оба аргумента TRUE
//    }
//    else 
//    {
//        // Код будет  выполняться если b больше чем a. И a и b не равны 0.
//    }
//    if (a * a > b || b * b > a)
//    {
//        // Если один из аргументов TRUE
//    }
//}

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int n;
//	cin >> n;
//	cout << "Напишите 1, для задания 1 и т д";
//	switch (n) // Проверяет число в n и переходит в case соответствующий числу
//	{
//	case 1: // Если n = 1 выполняется код снизу
//		cout << "Задание 1:";
//		int a;
//		cin >> a;
//		break; // Нужен чтобы все кейсы после него не выполнялись
//	case 2:
//		cout << "Задание 2:";
//		break;
//	case 1000:
//		cout << "Задание 1000";
//		break;
//	default:
//		cout << "Если не написан кейс для n";
//		break;
//	}
//}

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int n;
//	cout << "Введите номер задания (1-5): ";
//	cin >> n;
//	switch (n)
//	{
//	case 1:
//		int a;
//		cout << "1. Введите число: ";
//		cin >> a;
//
//		if (a % 2 == 0)
//		{
//			cout << "Число " << a << " четное\n";
//		}
//		else
//		{
//			cout << "Число " << a << " нечетное\n";
//		}
//		break;
//	case 2:
//		int b;
//		cout << "2. Введите число: ";
//		cin >> b;
//
//		if (b > 0)
//		{
//			cout << "Число " << b << " положительное\n";
//		}
//		if (b < 0)
//		{
//			cout << "Число " << b << " отрицательное\n";
//		}
//		if (b == 0)
//		{
//			cout << "Введеное число равно нулю\n";
//		}
//		break;
//	case 3:
//		int c;
//		cout << "3. Введите число баллов в диапазоне от 0 до 100: ";
//		cin >> c;
//
//		if (c < 0 || c > 100)
//		{
//			cout << "ОШИБКА: Число должно быть в диапазоне от 0 до 100!\n";
//		}
//		else if (c < 50)
//		{
//			cout << "Ваша оценка: 2\n";
//		}
//		else if (c < 69)
//		{
//			cout << "Ваша оценка: 3\n";
//		}
//		else if (c < 89)
//		{
//			cout << "Ваша оценка: 4\n";
//		}
//		else if (c <= 100)
//		{
//			cout << "Ваша оценка: 5\n";
//		}
//		break;
//	case 4:
//		int d;
//		cout << "4. Введите число: ";
//		cin >> d;
//
//		if (d >= 25 && d <= 50)
//		{
//			cout << "Число " << d << " лежит в диапазоне от 25 до 50\n";
//		}
//		else
//		{
//			cout << "Число " << d << " не лежит в диапазоне от 25 до 50\n";
//		}
//		break;
//	case 5:
//		int a1;
//		int b1;
//		int c1;
//		cout << "5. Введите стороны треугольника:\na1 = ";
//		cin >> a1;
//		cout << "b1 = ";
//		cin >> b1;
//		cout << "c1 = ";
//		cin >> c1;
//
//		if (a1 > b1 + c1 && b1 > a1 + c1 && c1 > a1 + b1)
//		{
//			cout << "\nТреугольник не существует\n";
//		}
//		else
//		{
//			cout << "\nТреугольник существует\n";
//		}
//		break;
//	default:
//		cout << "ОШИБКА: Задания с таким номером не существует\n";
//		break;
//	}
//}

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//
//	int a;
//	int b;
//	cout << "Введите первое число: ";
//	cin >> a;
//	cout << "Введите второе число: ";
//	cin >> b;
//
//	int n;
//	cout << "\n1 - умножение (*)\n2 - деление (/)\n3 - деление с выч. остатка (%)\n4 - сумма (+)\n5 - разность (-)\n\nВведите действие (1-5): ";
//	cin >> n;
//	switch (n)
//	{
//	case 1:
//		cout << "\n" << a << " * " << b << " = " << a * b << "\n";
//		break;
//	case 2:
//		if (b == 0)
//			cout << "\nОШИБКА: Деление на ноль невозможно\n";
//		else
//			cout << "\n" << a << " / " << b << " = " << a / b << "\n";
//		break;
//	case 3:
//		if (b == 0)
//			cout << "\nОШИБКА: Деление на ноль невозможно\n";
//		else
//			cout << "\n" << a << " % " << b << " = " << a % b << "\n";
//		break;
//	case 4:
//		cout << "\n" << a << " + " << b << " = " << a + b << "\n";
//		break;
//	case 5:
//		cout << "\n" << a << " - " << b << " = " << a - b << "\n";
//		break;
//	default:
//		cout << "\nОШИБКА: Неверное действие!\n";
//		break;
//	}
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n;
	cout << "Введите номер месяца: ";
	cin >> n;
	switch (n)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "\nЧисло дней: 31\n";
		break;
	case 4: case 6: case 9: case 11:
		cout << "\nЧисло дней: 30\n";
		break;
	case 2:
		cout << "\nЧило дней: 28 (в високостный год - 29)\n";
		break;

	default:
		cout << "\nТакого месяца не существует!\n";
		break;
	}
}
