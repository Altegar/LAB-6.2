// LAB-6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_2.cpp
// Сушинський Ігор
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами.
// Варіант 28
// Ітераційний спосіб

#include <iostream>

using namespace std;

int Count(int* a, int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if ((a[i] % 2) != 0)
			count++;
	return count;
}

int main()
{
	const int n = 5; // поточна розмірність масиву n = 1..32
	int a[n]; // заданий масив

	cout << "count = " << Count(a, n) << endl;

	return 0;
}