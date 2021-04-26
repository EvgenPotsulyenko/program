// program.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define INTEGER
#include <iostream>
#include "Header.h"
#define c 10

#define меньшее(a,b) if(a < b)
#define меньшеепринт(a) cout << a
#define меньшееe()  else
#define меньшееe1(b) cout << b
#define большее(a,b) if(b < a)
#define квадрат(a) a * a
#define степень(a,b) pow(a, b)
#define чётность(a) if(a % 2 == 0)
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	//N1

	//integer
	//int c = 10;
	int* a = new int[c];
	fillArr(a,c);
	showArr(a,c);	
	mins(a, c);
	maxs(a,c);
	izm(a,c);
	bubbleSortArr(a, c);
	cout << "Отсортированый масив" << endl;
	showArr(a, c);
	cout << endl;

#undef INTEGER

	///float

#define Float
#include "Header.h"
	float* b = new float[c];
	fillArr(b,c);
	showArr(b, c);	
	mins(b, c);
	maxs(b, c);
	izm(b,c);
	cout << "Отсортированый масив" << endl;
	bubbleSortArr(b, c);
	showArr(b, c);
	cout << endl;

	///
#undef Float

	////char


#define Char
#include "Header.h"
	char* k = new char[c];
	fillArr(k, c);
	showArr(k, c);
	mins(k, c);
	maxs(k, c);
    izm(k,c);
	cout << "Отсортированый масив" << endl;
	bubbleSortArr(k, c);
	showArr(k, c);
	cout << endl;

	////
#undef Char

	//N2

	//int a = 5, b = 4;


	/*меньшее(a, b)
	{
		меньшеепринт(a);
	}
	меньшееe()
	{
		меньшееe1(b);
	}*/

	/*большее(a, b)
	{
		меньшеепринт(a);
	}
	меньшееe()
	{
		меньшееe1(b);
	}*/

	//cout << квадрат(a) << endl;

	//cout << степень(a,b) << endl;

	/*чётность(a)
	{
		cout << "Четное" << endl;
	}
	меньшееe()
	{
		cout << "Не чётное" << endl;
	}*/

	system("pause");
	return 0;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
