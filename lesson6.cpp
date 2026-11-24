#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*double sum = 0;
    for (double d = 0.0; d != 1.0; d += 0.1)
    {
        cout << d << " ";
        sum += d;
    }*/
    /*int count = 0;
    for (int i = 2; i < 1000000; i++)
    {
        count = 0;
        for (int j = 2; j < i/2; j++)
        {
            if (i % j == 0)
            {
                count++; break;
            }
        }
        if (count == 0) cout << i << " \n";
    }*/
    /* for (unsigned int ui = 5; ui >= 0; ui--)
    {
        cout << ui << " ";
        if (ui > 4294967283) ui = 3;
    }*/
    /*for (int i = 0; i < 10; i++);
    {
        cout << "hello world";
    }*/
    //cout << "  ";

    // Задание 1
    int sum = 0;
    int number = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += i * j;
            number = number + 1;
            cout << "Итерация " << number << ": i = " << i << " | j = " << j << " | sum = " << sum << "\n";
        }
    }

    // Задание 2
    /*string a = "a";
    cout << "\nВведите 4-ех значное число: ";
    cin >> a;
    cout << "Перевернутое: " << a[a.length() - 1] << a[a.length() - 2] << a[a.length() - 3] << a[a.length() - 4];*/
    int a = 0;
    cout << "\nВведите 4-ех значное число\na = ";
    cin >> a;
    if (a < 1000 || a > 9999)
        cout << "\nОШИБКА: Число должно быть 4-ех значным";
    else
    {
        int a1 = a / 1000;
        int a2 = (a / 100) % 10;
        int a3 = (a / 10) % 10;
        int a4 = a % 10;
        cout << "\nПеревернутое a = " << a4 << a3 << a2 << a1;
    }

    // Задание 3
    int n = 0;
    cout << "\n\nВведите 4-ех значное число\nn = ";
    cin >> n;
    if (n < 1000 || n > 9999)
        cout << "\nОШИБКА: Число должно быть 4-ех значным\n";
    else
    {
        int n1 = n / 1000;
        int n2 = (n / 100) % 10;
        int n3 = (n / 10) % 10;
        int n4 = n % 10;
        cout << "\nПроизведение цифр n = " << n1 << " * " << n2 << " * " << n3 << " * " << n4 << " = " << n1 * n2 * n3 * n4 << "\n";
    }

    // Задание 4
    int H = 0;
    int W = 0;
    cout << "\nВведите высоту и ширину рамки\nВысота: ";
    cin >> H;
    cout << "Ширина: ";
    cin >> W;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++)
        {
            if (i == 1 || i == H || j == 1 || j == W) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    // Задание 5
    int nod1 = 0;
    int nod2 = 0;
    cout << "\nНаибольший общий делитель\nВведите первое число: ";
    cin >> nod1;
    cout << "Введите второе число: ";
    cin >> nod2;
    int minnod = 0;
    int maxnod = 0;
    for (int i = 1; i <= min(nod1, nod2); i++)
    {
        if (nod1 % i == 0 && nod2 % i == 0) {
            if (minnod == 0) {
                minnod = i;
            }
            maxnod = i;
        }
    }
    cout << "\nНаименьший общий делитель: " << minnod << "\nНаибольший общий делитель: " << maxnod << "\n";
}
