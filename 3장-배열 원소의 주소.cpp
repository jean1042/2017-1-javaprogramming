#include <iostream>
using namespace std;

int main()
{
	int inc[100];
	cout << &inc /*�迭�� ���� �ּ�(ȭ���� 556~)*/ <<":" <<inc /*���￩��*/ << ":" << &inc[0]/*���￩�� ������ �ּ�*/<< endl;
	cout << ":" <<&inc[1]	<< ":" << &inc[2] << endl;

	cout << endl;
	cout << endl;

	int sales[4][5];

	cout << &sales<< &sales[0][0] << sales << endl;

	cout << sales +1 << ":" << sales +2 << endl;
	
	/*�����ͺ����� ������ �����ѵ�, �迭���� �迭�� ��ü�� ������Ű�� ���ҽ�Ű�� �� �Ұ���*/








}
