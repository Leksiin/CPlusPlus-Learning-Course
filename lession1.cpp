#include <iostream> // подключение библиотеки для ввода и вывода
#include <locale> // подключение библиотеки locale
#include <Windows.h> // подключение библиотеки windows
#include <cmath> // Библиотека для математических функций
using namespace std;
// int main() // функция в которую пишем код
// {
//     system("chcp 65001 > nul");
//     locale::global(locale(""));
//     wcout.imbue(locale()); // для подключения кириллицы
//     string login;
//     string password;
//     cout << "Введите логин: "; // вывод в консоль текста
//     cin >> login; // ввод в консоль данных
//     cout << "Введите пароль: ";
//     cin >> password;
//     cout << "Ваш логин: " + login + "\n" + "Ваш пароль: " + password;
// }

// int main()
// {
//     SetConsoleCP(1251);
//     SetConsoleOutputCP(1251); // для подключения кириллицы
//     string name;
//     string lastname;
//     cout << "Введите имя: ";
//     cin >> name;
//     cout << "Введите фамилию: ";
//     cin >> lastname;
//     cout << "Ваше имя: " + name + "\n" + "Ваша фамилия: " + lastname;
// }

// int main()
// {
// 	   SetConsoleCP(1251);
// 	   SetConsoleOutputCP(1251);
// 	   int c;
// 	   cin >> c;
// 	   int a = 10;
// 	   int b = 5;
// 	   cout << "C равен: " << c << "\n";
// 	   cout << a - b << "\n" << a * b << "\n" << a / b << "\n";
// }

// int main()
// {
// 	   SetConsoleCP(1251);
// 	   SetConsoleOutputCP(1251);
// 	   float a;
// 	   cin >> a;
// 	   cout << "a = " << a << "\n";
// 	   float b;
// 	   cin >> b;
// 	   cout << "b = " << b << "\n";
// 	   cout << "a + b = " << a + b << "\n" << "a - b = " << a - b << "\n" << "a * b = " << a * b << "\n" << "a / b = " << a / b << "\n";
// }

// int main()
// {
// 	   SetConsoleCP(1251);
// 	   SetConsoleOutputCP(1251);
// 	   short sh = 32766; // вмещает в себя до 32767
// 	   cout << sh;
// 	   int a = 10; // для целых чисел до 2.1 млрд
// 	   long long l = 2000000000000000000; // наибольшее хранение числа
// 	   string str = "text"; // для текста
// 	   char letter = 't';
// 	   float f = 1.6; // для дробных чисел
// 	   bool b = FALSE; // для TRUE или FALSE
// 	   /*if (a)
// 	   {
// 		   cout << "a=True";
// 	   }*/
// }

// int main() 
// {
// 	   SetConsoleCP(1251);
// 	   SetConsoleOutputCP(1251);
// 	   // string str; // объявление строковой переменной
// 	   // cin >> str; // ввод в консоль данные в переменную
// 	   // str = str + "!"; // преобразуем переменную str
// 	   // cout << str; // вывод в консоль
// 	   int a;
// 	   int b;
// 	   int c;
// 	   cout << "Введите первое число: ";
// 	   cin >> a;
// 	   cout << "Введите второе число: ";
// 	   cin >> b;
// 	   cout << "Введите третье число: ";
// 	   cin >> c;
// 	   float d = (a + b + c) / 3;
// 	   cout << "\n" << "Среднее арифметическое: " << d << "\n";
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//	   // string str = "testte"; // объявление строковой переменной
//	   // cin >> str; // ввод в консоль данные в переменную
//	   // str = str + "!"; // преобразуем переменную str
//	   // cout << str[str.length() - 1]; // вывод последнего символа в строке
//	   // cout << str[0]; // вывод первого символа
//	
//	   string a = "a";
//	   cout << "Введите 6 символов: ";
//	   cin >> a;
//	   cout << "\n" << a[1] << "\n" << a[3] << "\n" << a[5] << "\n";
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//	   string a = "a";
//	   cout << "Введите 6 символов: ";
//	   cin >> a;
//	   cout << "\n" << "Наоборот: " << a[a.length() - 1] << a[a.length() - 2] << a[a.length() - 3] << a[a.length() - 4] << a[a.length() - 5] << a[a.length() - 6] << "\n";
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//	   int a = 10;
//	   int b = 50;
//	   if (a > b)
//	   {
//		   cout << a;
//	   }
//	   else
//	   {
//		   cout << b;
//	   }
//	   else if (a == b)
//	   {
//	   cout << a + b;
//	   }
//	   else
//	   {
//	   cout << b;
//	   }
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//	   string a = "a";
//	   string b = "b";
//	   cout << "Введите первую строку: ";
//	   cin >> a;
//	   cout << "Введите вторую строку: ";
//	   cin >> b;
//	   if (a.length() > b.length())
//	   {
//		   cout << "\n" << "============ Строка с наибольшим количеством символов ============" << "\n" << "\n" << "Первая строка: " << a << " | Количество символов: " << a.length() << "\n";
//	   }
//	   else if (a.length() == b.length())
//	   {
//		   cout << "\n" << "============ Строка с наибольшим количеством символов ============" << "\n" << "\n" << "Длина обоих строк одинакова" << "\n" << "Первая строка: " << a << " | Количество символов: " << a.length() << "\n" << "Вторая строка: " << b << " | Количество символов: " << b.length() << "\n";
//	   }
//	   else
//	   {
//		   cout << "\n" << "============ Строка с наибольшим количеством символов ============" << "\n" << "\n" << "Вторая строка: " << b << " | Количество символов: " << b.length() << "\n";
//	   }
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//
//	   // Найти силу тяжести F с вводом массы (m * g)
//	   float g = 9.8;
//	   cout << "g = " << g << "\n" << "\n";
//	   float m;
//	   cout << "Введите массу (m)" << "\n" << "m = ";
//	   cin >> m;
//	   cout << "\n" << "F (тяжесть) = m * g = " << m * g << "\n" << "\n" << "================================" << "\n";
//
//	   // Найти скорость с вводом пути S и временем t
//	   float s;
//	   cout << "\n" << "Введите длину пути (S)" << "\n" << "S = ";
//	   cin >> s;
//	   float t;
//	   cout << "Введите время пути (t)" << "\n" << "t = ";
//	   cin >> t;
//	   cout << "\n" << "v (скорость) = S / t = " << s / t << "\n" << "\n" << "================================" << "\n";
//
//	   //Вывести периметр и площадь с вводом длины и высоты прямоугольника
//	   float a;
//	   cout << "\n" << "Введите длину прямоугольника (a)" << "\n" << "a = ";
//	   cin >> a;
//	   float b;
//	   cout << "Введите высоту прямоугольника (b)" << "\n" << "b = ";
//	   cin >> b;
//	   cout << "\n" << "P (периметр прямоугольника) = 2 * (a + b) = " << 2 * (a + b) << "\n" << "S (площадь прямоугольника) = a * b = " << a * b << "\n";
// }

// int main()
// {
//	   SetConsoleCP(1251);
//	   SetConsoleOutputCP(1251);
//	   float g = 9.8;
//	   int pi = 3.14;
//	   int a = -10;
//	   int deg = 90;
//	   int rad = deg * pi / 180;
//	   cout << "Корень g: " << sqrt(g) << "\n";
//	   cout << "Квадрат g: " << pow(g, 2) << "\n";
//	   cout << "Округление в меньшую сторону: " << floor(g) << "\n";
//	   cout << "Округление в большую сторону: " << ceil(g) << "\n";
//	   cout << "Округление:" << round(g) << "\n";
//	   cout << "Модуль a: " << abs(a) << "\n";
//	   cout << "Синус rad: " << sin(rad) << "\n";
//	   cout << "Косинус rad: " << cos(rad) << "\n";
// }

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Найти гипотенузу треугольника по катетам
	float a1;
	cout << "Введите первый катет (a1)" << "\n" << "a1 = ";
	cin >> a1;
	float b1;
	cout << "Введите второй катет (b1)" << "\n" << "b1 = ";
	cin >> b1;
	cout << "\n" << "c1 (гипотенуза) = /(a1^2 * b1^2) = " << sqrt(pow(a1, 2) * pow(b1, 2)) << "\n" << "\n" << "================================" << "\n" << "\n";

	// Ввод a и b, вывести a в степени b
	float a;
	cout << "Введите a" << "\n" << "a = ";
	cin >> a;
	float b;
	cout << "Введите b" << "\n" << "b = ";
	cin >> b;
	cout << "\n" << "c = a^b = " << pow(a, b) << "\n" << "\n" << "================================" << "\n" << "\n";

	// Ввести 2 точки x1, x2, y1, y2 Найти расстояние между ними
	float x1;
	cout << "Введите первую точку x" << "\n" << "x1 = ";
	cin >> x1;
	float x2;
	cout << "Введите вторую точку x" << "\n" << "x2 = ";
	cin >> x2;
	cout << "\n" << "Расстояние = x1 + x2 = " << x1 + x2 << "\n" << "\n";
	float y1;
	cout << "Введите первую точку y" << "\n" << "y1 = ";
	cin >> y1;
	float y2;
	cout << "Введите вторую точку y" << "\n" << "y2 = ";
	cin >> y2;
	cout << "\n" << "Расстояние = y1 + y2 = " << y1 + y2 << "\n" << "\n";
	cout << "Расстояние между x и y = (x1 + x2) + (y1 + y2) = " << (x1 + x2) + (y1 + y2) << "\n" << "\n" << "================================" << "\n" << "\n";

	// Найти син и кос по вводу угла
	float u;
	cout << "Введите угол u" << "\n" << "u = ";
	cin >> u;
	cout << "\n" << "Синус u: " << sin(u) << "\n" << "Косинус u: " << cos(u) << "\n";
}
