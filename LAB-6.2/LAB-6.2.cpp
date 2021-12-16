// LAB-6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// LAB_06_2.cpp
// Сушинський Ігор
// Лабораторна робота № 6.2
// Опрацювання одновимірних масивів ітераційними та рекурсивними способами.
// Варіант 28
// Ітераційний спосіб

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void Random(int* a, const int n, const int x, const int y)
{
	for (int i = 0; i < n; i++) // i - додаткова змінна
		a[i] = rand() % (y - x + 1) + x;
}

int Count(int* a, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
		if (a[i] % 2 != 0)
			count++;
	return count;
}

void Print(int* a, const int n) // форматне виведення
{
	for (int i = 0; i < n; i++)
		cout << setw(3) << a[i] << " ";
	cout << "\n";
}

int main()
{
	srand((unsigned)time(0)); // ініціалізація генератора випадкових чисел

	const int n = 12; // поточна розмірність масиву n = 1..12
	int a[n]; // заданий масив
	int x = 2, y = 47;

	Random(a, n, x, y);
	cout << "Random = "; Print(a, n);

	cout << "count = " << Count(a, n) << endl;

	return 0;
}