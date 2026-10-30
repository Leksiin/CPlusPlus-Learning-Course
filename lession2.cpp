#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    short s = 32000; // 2 байта в памяти для выделения
//    int i = 2094967295; // 4 байта
//    long l = 40000000000; // 4-8 байт
//    long long ll = 9 * pow(10, 18); // 8 байт
//    unsigned int ui = 1;
//    ui = ui - i;
//    float f = 9.55456; // 4 байта
//    double d = 9.65463465612354; // 8 байт в памяти
//    string str = "рпарпавпвап"; // для слов
//    char c = 'A'; // для 1 символа
//    bool b = TRUE;
//    bool false1 = FALSE;
//
//    cout << ui;
//}

//int main()
//{
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//    auto str = 15.5;
//    const double pi = 3.141592;
//    int a = 2147483647;
//    a = a + 2147483649;
//    double b = a;
//    int c = 3.99;
//    cout << a/2.0;
//}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1;
	float b = 2.2;
	long c = 3;
	long long cc = 33;
	short d = 4;
	double e = 5;
	unsigned int ui = 6;
	string str = "абв";
	auto auto1 = 7;
	auto auto2 = "hello";
	char f = '!';
	const char* s = "hello";
	char ss = 100;
	char sss = 'ёё';
	bool g = TRUE;
	const double h = 8;

	cout << "int a = " << a << " | Размер = " << sizeof(a) << " байт" << "\n" << "float b = " << b << " | Размер = " << sizeof(b) << " байт" << "\n" << "long c = " << c << " | Размер = " << sizeof(c) << " байт" << "\n" << "long long cc = " << cc << " | Размер = " << sizeof(cc) << " байт" << "\n" << "short d = " << d << " | Размер = " << sizeof(d) << " байт" << "\n" << "double e = " << e << " | Размер = " << sizeof(e) << " байт" << "\n" << "unsigned int ui = " << ui << " | Размер = " << sizeof(ui) << " байт" << "\n" << "string str = " << str << " | Размер = " << sizeof(str) << " байт" << "\n" << "auto auto1 = " << auto1 << " | Размер = " << sizeof(auto1) << " байт" << "\n" << "auto auto2 = " << auto2 << " | Размер = " << sizeof(auto2) << " байт" << "\n" << "char f = " << f << " | Размер = " << sizeof(f) << " байт" << "\n" << "const char* s = " << s << " | Размер = " << sizeof(s) << " байт" << "\n" << "char ss = " << ss << " | Размер = " << sizeof(ss) << " байт" << "\n" << "char sss = " << sss << " | Размер = " << sizeof(sss) << " байт" << "\n" << "bool g = " << g << " | Размер = " << sizeof(g) << " байт" << "\n" << "const double h = " << h << " | Размер = " << sizeof(h) << " байт" << "\n";
}

