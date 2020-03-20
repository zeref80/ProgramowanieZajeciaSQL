﻿// twotemps.cpp -- użycie przeciążonych szablonów funkcji
#include <iostream>
template <typename T> // szablon oryginalny
void Swap(T& a, T& b);
template <typename T> // nowy szablon
void Swap(T* a, T* b, int n);
void Show(int a[]);
const int Lim = 8;
int main()
{
	setlocale(LC_ALL, "pl_PL");
	using namespace std;
	int i = 10, j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Użycie funkcji obsługującej typ int, "
		"wygenerowanej przez kompilator:\n";
	Swap(i, j); // pasuje do szablonu oryginalnego
	cout << "Teraz i, j = " << i << ", " << j << ".\n";
	int d1[Lim] = { 0,7,0,4,1,7,7,6 };
	int d2[Lim] = { 0,7,2,0,1,9,6,9 };
	cout << "Tablice początkowo:\n";
	Show(d1);
	Show(d2);
	Swap(d1, d2, Lim); // pasuje do nowego szablonu
	cout << "Tablice po zamianie:\n";
	Show(d1);
	Show(d2);
	// cin.get();
	return 0;
}

template <typename T>
void Swap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
template <typename T>
void Swap(T a[], T b[], int n)
{
	T temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = b[i];
		b[i] = temp;
	}
}
void Show(int a[])
{
	using namespace std;
	for (int i = 0; i < Lim; i++)
		cout << a[i] << "\t";
	cout << endl;
}