#include <iostream>
using namespace std;


typedef int element;
class QNode {
public:
	element data;
	QNode *link;
};
class queue_class{
public:
	QNode * front, * rear; //queue pointer


	queue_class() { // ������ �Լ�
		front = rear = NULL;
	}

	//QUE�� ����ִ��� 
	bool is_empty() {
		return (front == NULL);
	}

	//que�� ���ο� DATA ������� ��
	void enQueue(element xdata) {
		QNode *new_node = new QNode;
		new_node->data = xdata;
		new_node->link = NULL; 
		
		if (rear == NULL) { //list �� isempty
			front = rear = new_node;
		}
		else {
			rear->link = new_node;
			rear = new_node; // rear�� ������ node �� �����Ѿ� �ϴϱ�@!
		}
	}

	element deQueue() {
		if (is_empty()) {
			cout << "ERROR : STACK EMPTY" << endl;
			exit; //return;
		}
		else {
			element x = front->data;
			front = front->link;
			if(front==NULL)//FRONT�� �ٲ���� NULL-> ���� ���Ұ� �ϳ����ٴ� ��, �װ� ����°ž�
			{
				rear = NULL;
			}
			return x;
		}
	}

	void printQueue() {
		for (QNode *ptr = front; ptr!= NULL; ptr = ptr->link)
			cout << ptr->data << " "; //���Ḯ��Ʈ ���󰡸� ���
	}
};


void main()
{
	queue_class MyQueue;
	MyQueue.enQueue(10);
	MyQueue.enQueue(20);
	MyQueue.enQueue(30);
	MyQueue.enQueue(40);

	MyQueue.printQueue();

	MyQueue.deQueue();
	MyQueue.deQueue();

	cout << endl;

	MyQueue.printQueue();
}
