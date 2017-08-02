#include <iostream>
using namespace std;
#define MAX_STACK_SIZE 100

typedef int element;
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
	//����ǥ���(postfix)�� �Է¹���
	char postfix[500];
	cout << "Enter infix Expression : ";
	cin.getline(postfix, 500, '\n');
	cout << postfix << " ==> ";

	stack_class MyStack;

	for (int i = 0; i <= strlen(postfix); i++) {
		//�ǿ����ڸ�
		if (postfix[i] >= '0' && postfix[i] <= '9') { // �����̸�
			MyStack.push(postfix[i] - '0'); // ���ڸ� ���ڷ� �ٲٴ� ��ǥ���� (?
		}
		// �����ڸ�
		else if (postfix[i] == '*') {
			int opr2 = MyStack.pop(); // ������ �����ʿ� �;��� ģ��
			int opr1 = MyStack.pop();
			MyStack.push(opr1 * opr2);
		}
		else if (postfix[i] == '+') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 + opr2);
		}
		else if (postfix[i] == '-') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 - opr2);
		}
		else if (postfix[i] == '/') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 / opr2);
		}
		else if (postfix[i] == '%') {
			int opr2 = MyStack.pop();
			int opr1 = MyStack.pop();
			MyStack.push(opr1 % opr2);
		}
	}

	cout << MyStack.pop() << endl;
}