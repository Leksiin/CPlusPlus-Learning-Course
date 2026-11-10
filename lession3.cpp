#include <iostream>
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
//
//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	
//	int n;
//	cout << "Введите номер месяца: ";
//	cin >> n;
//	switch (n)
//	{
//	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
//		cout << "\nЧисло дней: 31\n";
//		break;
//	case 4: case 6: case 9: case 11:
//		cout << "\nЧисло дней: 30\n";
//		break;
//	case 2:
//		cout << "\nЧило дней: 28 (в високостный год - 29)\n";
//		break;
//
//	default:
//		cout << "\nТакого месяца не существует!\n";
//		break;
//	}
//}

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int a, b, max, age;
//	cin >> a >> b >> age;
//	max = (a > b) ? a : b; // (условие) ? значение если TRUE : значение если FALSE
//	cout << max << endl;
//	// auto v = (a > 0) ? 42 : "gfdgdfg"; ошибка т.к. разные типы данных
//	string s = (a > 0) ? "+" : (a == 0) ? "ноль" : "минус";
//	cout << s << endl;
//	cout << "Есть ли 18? : " << (age >= 18 ? "да" : "нет");
//}

//int main()
//{
//	SetConsoleCP(1251);
//	SetConsoleOutputCP(1251);
//	int x;
//	cout << "1. Введите число: ";
//	cin >> x;
//	cout << (x % 2 == 0 ? "Четное число\n\n" : "Нечетное число\n\n");
//
//	int c, d;
//	cout << "2. Введите первое число: ";
//	cin >> c;
//	cout << "Введите второе число: ";
//	cin >> d;
//
//	cout << "Наименьшее число: " << (c < d ? c : d);
//
//	int a, b;
//	cout << "\n\n3. Введите b: ";
//	cin >> b;
//	cout << "Введите a: ";
//	cin >> a;
//	cout << "b = " << (a > 0 ? a : b);
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int year;
	cout << "1. Введите год: ";
	cin >> year;
	if (year % 4 == 0 || year % 400 == 0)
	{
		cout << "Год является високосным";
	}
	else
		cout << "Год не является високосным";

	int sum;
	cout << "\n\n2. Введите сумму покупки: ";
	cin >> sum;
	if (sum < 1000)
	{
		cout << "Вы получаете к сумме покупки скидку 5%!";
	}
	else if (sum < 5000)
	{
		cout << "Вы получаете к сумме покупки скиду 10%!";
	}
	else if (sum < 100000)
	{
		cout << "Вы получаете к сумме покупки скидку 25%!";
	}

	int bank;
	int balance = 65000;
	int plusmoney;
	int minusmoney;
	cout << "\n\n1 - Внести средства\n2 - Вывести средства\n3 - Информация о балансе\n\nВведите действие(1-3): ";
	cin >> bank;
	switch (bank)
	{
	case 1:
		cout << "Введите вносимую сумму: ";
		cin >> plusmoney;
		balance = balance + plusmoney;
		cout << "Внесенная сумма: " << plusmoney << " руб. | Текущий баланс: " << balance;
		break;
	case 2:
		cout << "Введите сумму, которую нужно вывести: ";
		cin >> minusmoney;
		if (minusmoney > balance)
		{
			cout << "ОШИБКА: Недостаточно средств";
		}
		else
		{
			balance = balance - minusmoney;
			cout << "Выведенная сумма: " << minusmoney << " руб. | Текущий баланс: " << balance;
		}
		break;
	case 3:
		cout << "Текущий баланс: " << balance << " руб.";
		break;
	default:
		cout << "ОШИБКА: Неверное действие";
	}

	int computer = 50000;
	int monitor = 15000;
	int keyboard = 4000;
	int mouse = 1500;
	int headphones = 8000;

	int shop;
	cout << "\n\nТОВАРЫ:\n1. Компьютер - 50 000 руб.\n2. Монитор - 15 000 руб.\n3. Клавиатура - 4 000 руб.\n4. Компьютерная мышь - 1 500 руб.\n5. Наушники - 8 000 руб.\n 6 - Купить всё\n\n Введите номер товара, который хотите купить: ";
	cin >> shop;
	switch (shop)
	{
	case 1:
		if (balance > computer)
		{
			balance = balance - computer;
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	case 2:
		if (balance > monitor)
		{
			balance = balance - monitor;
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	case 3:
		if (balance > keyboard)
		{
			balance = balance - keyboard;
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	case 4:
		if (balance > mouse)
		{
			balance = balance - mouse;
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	case 5:
		if (balance > headphones)
		{
			balance = balance - headphones;
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	case 6:
		if (balance > (computer + monitor + keyboard + mouse + headphones))
		{
			balance = balance - (computer + monitor + keyboard + mouse + headphones);
			cout << "Спасибо за покупку! Ваш текущий баланс: " << balance << " руб.\n";
		}
		else
		{
			cout << "ОШИБКА: Недостаточно средств\n";
		}
		break;
	default:
		cout << "\nОШИБКА: Такого товара нет!\n";
		break;
	}
}
