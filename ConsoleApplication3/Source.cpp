#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
start:
	int x;
	cout << " ¬ведите номер задани€: ";
	cin >> x;
	if (x == 1)
	{
		// ƒаны два целых числа A и B (A < B). Ќайти все целые числа, 
		// расположенные между данными числами (не включа€ сами эти числа), в пор€дке их убывани€,
		// а также количество N этих чисел
		int a, b, n;
		cout << " ¬ведите b (a<b): ";
		cin >> b;
		cout << " ¬ведита a (a<b): ";
		cin >> a;
		int sum = 0;
		for (int i = b-1; i > a; i--)
		{
			cout << i << endl;
			sum++;
		}
		
		cout << "  оличество N чисел: " << sum << endl;
	}
	if (x == 2)
	{
		// «адано натуральные числа от 10 до N. ¬ывести нечетные кратные п€ти числа.
		int n;
		cout << " ¬ведите N (N>10) : ";
		cin >> n;
		for (int i = 10; i < n; i++)
		{
			if ((i % 2) && (i % 5 == 0))
			{
				cout << i << endl;
			}
			
		}
	}
	if (x == 3)
	{
		//¬ывести квадраты чисел от 11 до 99.
		int i = 11;
		while (i <= 99)
		{
			cout << i << " в квадрате равен: " << i*i << endl;
			i = i + 1;
		}

	}
	if (x == 4)
	{
		//ƒана последовательность из n вещественных чисел, начинающа€с€ с отрицательного числа.
		//ќпределить, какое количество отрицательных чисел записано в начале последовательности. ”словный оператор не использовать
		int a, b;
		cout << " ¬ведите начальное отрицательное число: " << endl;
		cin >> a;
		cout << " ¬ведите конечное положительное число: " << endl;
		cin >> b;
		for (int i = a; i < b; i++)
		{
			if (i < 0)
			{
				cout << i << endl;
			}
		}
	} 
	if (x == 5)
	{
		
		int ocenka;
		int i;
		int sum=0;
		srand(time(NULL));
		for (i = 1; i <= 20; i++)
		{
			sum = 0;
				ocenka = rand() % 6;
				sum = sum + ocenka;
				cout << i << " ученик получил оценку: " << sum << endl;
			}
		
	}
}