#include <iostream>
using namespace std;
#define MAX_QUE_SIZE 8 //que size 8���� ����(�۰�)

typedef int element;
class queue_class {
public:
	element myqueue[MAX_QUE_SIZE]; //�迭������� ����

	int front, rear; // Queue pointer

	queue_class() { // ������ �Լ�
		front = -1;
		rear = -1;
	}

	//QUE�� ����ִ��� 
	bool is_empty() {
		return (front == rear);
	}

	bool is_full() {

		return (rear == (MAX_QUE_SIZE - 1));
	}

	void enQueue(element data) {
		if (is_full()) {
			cout << "ERROR : QUEUE	FULL" << endl;
			return; // exit();
		}
		else {
			myqueue[++rear] = data;
			//rear++;
			//myqueue[rear] = data;
		}
	}

	element deQueue() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			//int x = mystack[top];
			//top--;
			//return (x);
			return myqueue[++front]; //front ���� ������Ű�� �� ������Ų ���� que ���� ��ȯ
		}
	}

	void printQueue() {
		for (int i = front + 1; i <= rear; i++)
			cout << myqueue[i] << " ";
	}
};


void main()
{
	queue_class MyQueue;
	MyQueue.enQueue(10);
	MyQueue.enQueue(20);
	MyQueue.enQueue(30);
	MyQueue.enQueue(40);
	MyQueue.enQueue(50);

	MyQueue.deQueue();
	MyQueue.deQueue();

	MyQueue.enQueue(60);
	MyQueue.enQueue(70);
	MyQueue.enQueue(80);
	MyQueue.enQueue(90);
	
	cout << endl;

	MyQueue.printQueue();
}