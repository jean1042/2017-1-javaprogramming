#include<iostream>
using namespace std;

//�߸��� �ڵ�
void swap(int x,int y)
{
int tmp;
tmp=x;
x=y;
y=tmp;

}


//����� �� �ڵ�
void swap2(int *i, int *j)
{
	int tmp;
	tmp = *i;
	*i= *j;
	*j = tmp;

}


void main()
{

	int i=10;
	int j=20;
	swap (i,j);
	cout << "i" << i << ":" << "j" << j << endl;

	swap2 (&i,&j);
	cout << "i" << i << ":" << "j" << j << endl;


}
//����� �� �ڵ�


