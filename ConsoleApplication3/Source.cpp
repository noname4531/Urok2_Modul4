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
	cout << " ������� ����� �������: ";
	cin >> x;
	if (x == 1)
	{
		// ���� ��� ����� ����� A � B (A < B). ����� ��� ����� �����, 
		// ������������� ����� ������� ������� (�� ������� ���� ��� �����), � ������� �� ��������,
		// � ����� ���������� N ���� �����
		int a, b, n;
		cout << " ������� b (a<b): ";
		cin >> b;
		cout << " ������� a (a<b): ";
		cin >> a;
		int sum = 0;
		for (int i = b-1; i > a; i--)
		{
			cout << i << endl;
			sum++;
		}
		
		cout << " ���������� N �����: " << sum << endl;
	}
	if (x == 2)
	{
		// ������ ����������� ����� �� 10 �� N. ������� �������� ������� ���� �����.
		int n;
		cout << " ������� N (N>10) : ";
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
		//������� �������� ����� �� 11 �� 99.
		int i = 11;
		while (i <= 99)
		{
			cout << i << " � �������� �����: " << i*i << endl;
			i = i + 1;
		}

	}
	if (x == 4)
	{
		//���� ������������������ �� n ������������ �����, ������������ � �������������� �����.
		//����������, ����� ���������� ������������� ����� �������� � ������ ������������������. �������� �������� �� ������������
		int a, b;
		cout << " ������� ��������� ������������� �����: " << endl;
		cin >> a;
		cout << " ������� �������� ������������� �����: " << endl;
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
				cout << i << " ������ ������� ������: " << sum << endl;
			}
		
	}
}