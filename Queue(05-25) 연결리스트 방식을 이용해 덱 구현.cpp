#include <iostream>
using namespace std;


typedef int element;
class QNode {
public:
	element data;
	QNode *llink;
	QNode *rlink;
};

class queue_class {
public:
	QNode * front, *rear; //queue pointer


	queue_class() { // ������ �Լ�
		front = rear = NULL;
	}

	//QUE�� ����ִ��� 
	bool is_empty() {
		return (front == NULL);
	}

	//rear�� ���ο� DATA ������� ��
	void enQueueRear(element xdata) {

		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->llink = new_node->rlink = NULL;

		if (/*rear == NULL*/ is_empty()) { //�� ����Ʈ�� ��� front�� rear �Ѵ� new node �� ����Ű�� �ٲ�� ��

			front = rear = new_node;
		}
		
		else {
			new_node->llink = rear;
			rear->rlink = new_node;
			rear = new_node;
		}
	}

	//front �� ���ο� DATA ������� ��
	void enQueueFront(element xdata) {

		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->llink = new_node->rlink = NULL;

		if (/*rear == NULL*/ is_empty()) //�� ����Ʈ�� ��� front�� rear �Ѵ� new node �� ����Ű�� �ٲ�� ��
		{
			front = rear = new_node;
		}
		else {
			new_node->rlink =front;
			front->llink = new_node;
			front = new_node;

		}
	}
		
		/*
		if (rear == NULL) { //list �� isempty
		front = rear = new_node;
		}
		else {
		rear->link = new_node;
		rear = new_node; // rear�� ������ node �� �����Ѿ� �ϴϱ�@!
		}
		}
		*/
		

	element deQueueFront() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = front->data;
			front = front->rlink;
		
			if (front == NULL) { //�ι�° ��尡 ���� ���(������ ��带 ����� ���)
				front = rear = NULL;
			}

			else {
				front->llink = NULL;
			}

			/*
			if (front == NULL)//FRONT�� �ٲ���� NULL-> ���� ���Ұ� �ϳ����ٴ� ��, �װ� ����°ž�
				rear = NULL;
			*/
			return x;
		}
	}

	element deQueueRear() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = rear->data;
			rear = rear->llink;

			if (rear == NULL) { //�ι�° ��尡 ���� ���(������ ��带 ����� ���)
				front = rear = NULL;
			}

			else {
				rear->rlink = NULL;
			}

			/*
			if (front == NULL)//FRONT�� �ٲ���� NULL-> ���� ���Ұ� �ϳ����ٴ� ��, �װ� ����°ž�
			rear = NULL;
			*/
			return x;
		}
	}



	void printQueue() {
		for (QNode *ptr = front; ptr != NULL; ptr = ptr->rlink)
			cout << ptr->data << " "; //���Ḯ��Ʈ ���󰡸� ���
	}
};


void main()
{
	queue_class MyQueue;
	MyQueue.enQueueRear(10);
	MyQueue.enQueueFront(20);
	MyQueue.enQueueFront(30);
	MyQueue.enQueueRear(40);

	MyQueue.printQueue();

	MyQueue.deQueueFront();
	MyQueue.deQueueRear();

	cout << endl;

	MyQueue.printQueue();
}
