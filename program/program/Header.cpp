#include <iostream>
#include"Header.h"
#pragma once
using namespace std;

//integer

void showArrInt(const int* a, const int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void fillArrInt(int* a, int n)
{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
		}
}

void bubbleSortArrInt(int a[], int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void minInt(int arr[], int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << "Минимальный: " << min << endl;
}

void maxInt(int *arr, int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << "Максимальный: " << max << endl;
}

void izmInt(int arr[], int n)
{
	int a, c;
	cout << "Введите номер символа " << endl;
	cin >> a;
	cout << "Введите новый елемент " << endl;
	cin >> c;
	arr[a] = c;		
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//

///float

void showArrfloat(float* a, int n)
{
	for (size_t i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void fillArrfloat(float* a, int n)
{
		for (int i = 0; i < n; i++)
		{
			a[i] = rand() % 100;
		}
}

void bubbleSortArrfloat(float a[], int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void minfloat(float* arr, int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << "Минимальный: " << min << endl;
}

void maxfloat(float* arr, int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << "Максимальный: " << max << endl;
}

void izmfloat(float* arr, int n)
{
	int a;
	float c;
	cout << "Введите номер символа " << endl;
	cin >> a;
	cout << "Введите новый елемент " << endl;
	cin >> c;
	arr[a] = c;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

///

////char

void showArrchar(char* a, int n)
{
	for (int i = 0; i < n; i++)	
		cout << a[i] << " ";
	cout << endl;
}

void fillArrchar(char* a, int n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 1000;
}

void bubbleSortArrchar(char a[], int n)
{
	for (size_t i = 0; i < n - 1; i++)
	{
		for (size_t j = 0; j < n - 1 - i; j++)
		{
			if (a[j] < a[j + 1])
				swap(a[j], a[j + 1]);
		}
	}
}

void minchar(char* arr, int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			swap(arr[i], min);
	cout << "Минимальный: " << min << endl;
}

void maxchar(char* arr, int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			swap(arr[i], max);
	cout << "Максимальный: " << max << endl;
}

void izmchar(char* arr, int n)
{
	int a;
	char c;
	cout << "Введите номер символа " << endl;
	cin >> a;
	cout << "Введите новый елемент " << endl;
	cin >> c;
	arr[a] = c;
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


////

void karsa(int xyi)
{
	cout << "*********" << endl;
}

