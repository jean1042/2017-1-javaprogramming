#include <iostream>
using namespace std;

int main()
{
	int sales[3][4] = { { 650 , 700 , 750 ,800 },{ 700 , 800 , 900 , 1000 },{ 900,850,990,1200 } };

	int total[3];
	double average[4];

	//�⵵�� ����� �Ѿ� total[]

	for (int year = 0; year < 3; year++)
	{
		total[year] = 0;

		for (int qrt = 0; qrt < 4; qrt++)
			total[year] += sales[year][qrt];

	}
	//�б⺰ ��� ����� average[]
	for (int qrt = 0; qrt < 4; qrt++)
	{
		int sum = 0;
		for (int year = 0; year < 3; year++)
		{
			sum += sales[year][qrt];
			average[qrt] = sum / 3.0;


		}
	}
	//����� ��� - �⵵�� �����
	for (int year = 0; year < 3; year++)
	{
		cout << year + 1 << "��° �⵵�� ����� �Ѿ�" << total[year]
			<< endl;
	}

	// ����� ��� - �б⺰ ����� average
	for (int qrt = 0; qrt < 4; qrt++)
	{
		cout << qrt + 1 << "�б�3�� ����" << average[qrt] << endl;
	}
}
