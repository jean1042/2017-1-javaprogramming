#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 100

typedef char element;
class stack_class {
public:
	element mystack[MAX_STACK_SIZE];//�迭������� ����
	int top; //stack pointer

	stack_class() { // ������ �Լ�
		top = -1;
	}

	bool is_empty() {
		// if (top == -1) return true;
		// else return false;
		return (top == -1);
	}

	bool is_full() {
		//if (top == MAX_STACK_SIZE - 1) return true;
		//else return false;
		return (top == (MAX_STACK_SIZE - 1));
	}

	void push(int data) {
		if (is_full()) {
			cout << "ERROR : STACK FULL" << endl;
			return; // exit();
		}
		else {
			//top++;
			//mystack[top] = data;
			mystack[++top] = data;
		}
	}

	element pop() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			//int x = mystack[top];
			//top--;
			//return (x);
			return mystack[top--]; //�ٲ�� ���� top�� �����͸� ���� ���߿� top�� ���� �ٿ���
		}
	}

	void printStack() {
		for (int i = top; i >= 0; i--)
			cout << mystack[i] << endl;
	}
};
bool checkMatching(char str[]) {
	stack_class MySecondStack;
	char open_ch;

	for (int i = 0; i <= strlen(str); i++) {
		switch (str[i]) {
		case '(':
		case '[':
		case '{':
			MySecondStack.push(str[i]);
			break;

		case ')':
		case ']':
		case '}':
			if (MySecondStack.is_empty()) return false;

			open_ch = MySecondStack.pop();
			if (open_ch == '(' && str[i] != ')' ||
				open_ch == '[' && str[i] != ']' ||
				open_ch == '{' && str[i] != '}') return false; //¦�� ��ġ���� ������ (�츮�� ���� �����ʹ� (�ε� �츮�� ������ �����Ͱ� ) �� �ƴϸ�)
			
		}
	}
	if (MySecondStack.is_empty()) return true;
	else return false;
}

void main()
{
	char str[100];
	cout << "Enter string to check : ";
	cin.getline(str,100,'\n');

	//if (checkMatching(str) == true)
	if (checkMatching(str))
		cout << "��ȣ �˻� ����" << endl;
	else
		cout << "��ȣ �˻� ����" << endl;

}