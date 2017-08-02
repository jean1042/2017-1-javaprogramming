#include <iostream>
using namespace std;

class Node {
public:
	int score;
	Node *link;
};

//head ������ null��
Node *Head = NULL; 

void printList()
{
	// �ڷḦ ���ʴ�� ���

	//���� ����Ʈ -> list�� NULL�� ���� �� x
	if (Head == NULL) return;
	else {
		Node *list = Head;
		do {
			cout << list->link->score << endl;
			list = list->link;
		} while (list != Head);
	}
}

//��� �� ����
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL) { //�󸮽�Ʈ��
		new_node->link = new_node;
		Head = new_node;
	}

	else
	{
		new_node->link = Head->link;
		Head->link = new_node;
		Head = new_node; //head�� �׻� ������ ��带 ����Ŵ
	}
}

void main()
{
	while (1) // while(true)
	{
		int value;

		cout << "���� ���� �Է��ϼ��� (�������� ������ �Է��ϼ���) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->link = NULL;

		// ����Ʈ�� �ڿ� ����
		insert_node_at_rear(new_node);
	}

	printList();

	// ��� �����ϱ�!
	// ������� ����� �ճ�尡 ���� ���� �Է¹���
	int value;
	cout << "������� ����� �� ��尡 ���� ��? ";
	cin >> value;

	Node *pre = NULL;
	Node *list = Head;
	do {
		list = list->link;
		if (list->score == value) {
			pre = list;
			break;
		}
	} while (list != Head);

	if (pre != NULL) {
		if (Head == pre->link) Head = pre;
		pre->link = pre->link->link; // pre�� ���� ��带 �ǳʶ�, �� ����
	}

	cout << "AFTER DELETION" << endl;
	printList();
}