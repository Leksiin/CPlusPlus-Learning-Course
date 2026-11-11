#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    char c;
//    int a, b;
//    cin>>a>>c>>b;
//    switch (c)
//    {
//    case '+': { int i; cout << "Ответ: " << a + b; break; }
//    case '-': cout << "Ответ: " << a - b; break;
//    case '/': cout << "Ответ: " << (b==0) ? 1 : a / b; break;
//    case '%': {
//        int i;
//        if (b == 0) cout << "На ноль делить нельзя"; 
//        else cout << "Ответ: " << a % b;
//        break;
//    }
//    case '*': cout << "Ответ: " << a * b; break;
//    default: cout << "Неверное значение";
//    }
//}

//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int a, b, c;
//    cout << "Введите a: ";
//    cin >> a;
//    cout << "Введите b: ";
//    cin >> b;
//    cout << "Введите c: ";
//    cin >> c;
//
//    if ((a >= b && a <= c) || (a >= c && a <= b))
//        cout << a << " находится в диапазоне между " << b << " и " << c;
//    else
//        cout << a << " не находится в диапазоне между " << b << " и " << c;
//
//}
//
//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    int n, i;
//    cout << "Нахождение периметра и площади\n\n1 - Прямоугольник\n2 - Круг\n3 - Треугольник\n4 - Квадрат\n\nНайти: ";
//    cin >> n;
//    cout << "\n\n1 - Периметр\n2 - Площадь\n3 - Оба\n\nНайти: ";
//    cin >> i;
//    switch (n)
//    {
//    case 1: 
//    {
//        int a, b;
//        cout << "\nВведите a: ";
//        cin >> a;
//        cout << "Введите b: ";
//        cin >> b;
//
//        if (i == 1)
//            cout << "\nP (периметр) = 2 * (" << a << " + " << b << ") = " << 2 * (a + b) << endl;
//        else if (i == 2)
//            cout << "\nS(площадь) = " << a << " * " << b << " = " << a * b << endl;
//        else if (i == 3)
//            cout << "\nP (периметр) = 2 * (" << a << " + " << b << ") = " << 2 * (a + b) << "\nS (площадь) = " << a << " * " << b << " = " << a * b << endl;
//        else
//            cout << "\nОШИБКА: Неверное значение для находа периметра/площади\n";
//        break;
//    }
//    case 2:
//    {
//        int r;
//        float pi = 3.14;
//        cout << "\nВведите r (радиус): ";
//        cin >> r;
//
//        if (i == 1)
//            cout << "\nP (периметр) = 2 * " << pi << " * " << r << " = " << 2 * pi * r << endl;
//        else if (i == 2)
//            cout << "\nS (площадь) = " << pi << " * " << r << "^2 = " << pi * pow(r, 2) << endl;
//        else if (i == 3)
//            cout << "\nP (периметр) = 2 * " << pi << " * " << r << " = " << 2 * pi * r << "\nS (площадь) = " << pi << " * " << r << "^2 = " << pi * pow(r, 2) << endl;
//        else
//            cout << "\nОШИБКА: Неверное значение для находа периметра/площади\n";
//        break;
//    }
//    case 3:
//    {
//        int a;
//        cout << "\nВведите a: ";
//        cin >> a;
//
//        if (i == 1)
//        {
//            int b, c;
//            cout << "Введите b: ";
//            cin >> b;
//            cout << "Введите c: ";
//            cin >> c;
//            cout << "\nP (периметр) = " << a << " + " << b << " + " << c << " = " << a + b + c << endl;
//        }
//        else if (i == 2)
//        {
//            int h;
//            cout << "Введите h (высоту треугольника): ";
//            cin >> h;
//            cout << "\nS(площадь) = " << "1/2 * " << a << " * " << h << " = " << (1/2) * a * h << endl;
//        }
//        else if (i == 3)
//        {
//            int b, c, h;
//            cout << "Введите b: ";
//            cin >> b;
//            cout << "Введите c: ";
//            cin >> c;
//            cout << "Введите h (высоту треугольника): ";
//            cin >> h;
//            cout << "\nP (периметр) = " << a << " + " << b << " + " << c << " = " << a + b + c << "\nS(площадь) = " << "1/2 * " << a << " * " << h << " = " << (1 / 2) * a * h << endl;
//        }
//        else
//            cout << "\nОШИБКА: Неверное значение для находа периметра/площади\n";
//        break;
//    }
//    case 4:
//    {
//        int a;
//        cout << "\nВведите a: ";
//        cin >> a;
//        
//        if (i == 1)
//            cout << "\nP (периметр) = 4 * " << a << " = " << 4 * a << endl;
//        else if (i == 2)
//            cout << "\nS (площадь) = " << a << "^2 = " << pow(a, 2) << endl;
//        else if (i == 3)
//            cout << "\nP (периметр) = 4 * " << a << " = " << 4 * a << "\nS (площадь) = " << a << "^2 = " << pow(a, 2) << endl;
//        else
//            cout << "\nОШИБКА: Неверное значение для находа периметра/площади\n";
//        break;
//    }
//    default:
//        cout << "\nОШИБКА: Неверное значение фигуры для находа периметра/площади\n";
//        break;
//    }
//}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    int a;
    string b;
    long c;
    char d;
    cout << "1 - int\n2 - string\n3 - long\n4 - char\n\nВведите тип переменной: ";
    cin >> n;
    switch (n)
    {
    case 1: cout << "Потребляет оперативной памяти: " << sizeof(a) << " байт\n"; break;
    case 2: cout << "Потребляет оперативной памяти: " << sizeof(b) << " байт\n"; break;
    case 3: cout << "Потребляет оперативной памяти: " << sizeof(c) << " байт\n"; break;
    case 4: cout << "Потребляет оперативной памяти: " << sizeof(d) << " байт\n"; break;
    }
}
