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

	void push(element data) {
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


void main()
{
	
	//17.05.18
	//����ǥ���(infix)�� ����ǥ���(postfix)�� ��ȯ
	char infix[500];
	cout << "Enter infix Expression : ";
	cin.getline(infix, 500, '\n');
	cout << infix << "==>" << endl;
	stack_class MyStack;
	
	for (int i = 0; i <= strlen(infix); i++)
	{

		//���� ��ȣ�� ���
		if (infix[i] == '(') continue;
		//�ݴ� ��ȣ�� ���
		else if (infix[i] == ')') {
			cout << MyStack.pop() << " ";
		}
	
		//��Ģ������ ���� push �Ѵ�.

		else if (infix[i] == '+') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '*') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '-') {
			MyStack.push(infix[i]);
		}
		else if (infix[i] == '/') {
			MyStack.push(infix[i]);
		}

		//�ǿ������� ��� (space ����)
		else {
			cout <<" "<< infix[i];
		}
	}
	cout << endl;
}