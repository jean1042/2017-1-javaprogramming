#include <iostream>
using namespace std;


// double likned list
class Node {
public:
	int score;
	Node *llink;
	Node *rlink;
};

Node *Head = NULL; 

void printList()
{
	// �ڷḦ ���ʴ�� ���
	for (Node *list = Head->rlink; list != Head; list = list->rlink)
		cout << list->score << endl;
}

void printListReverse()
{
	// �ڷḦ �������� ���
	for (Node *list = Head->llink; list != Head; list = list->llink)
		cout << list->score << endl;
}

void insert_node_at_rear(Node *new_node)
{
	new_node->rlink = Head;
	new_node->llink = Head->llink;
	Head->llink->rlink = new_node;
	Head->llink = new_node;
}

void deleteNode(Node *removed)
{
	removed->llink->rlink = removed->rlink;
	removed->rlink->llink = removed->llink;
}

void main()
{
	// ����� ����
	Head = new Node;
	Head->rlink = Head;
	Head->llink = Head;


	while (1) // while(true)
	{
		int value;

		cout << "���� ���� �Է��ϼ��� (�������� ������ �Է��ϼ���) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->llink = NULL;
		new_node->rlink = NULL;

		// ����Ʈ�� �������� ����
		insert_node_at_rear(new_node);
	}

	cout << "������" << endl;
	printList();
	cout << "����" << endl;
	printListReverse();

	// ��� �����ϱ�!
	int value;
	cout << "������� ����� ����?";
	cin >> value;

	for (Node *list = Head->rlink; list != Head; list = list->rlink)
	{
		if (list->score == value) {
			deleteNode(list);
		}
	}


	cout << "AFTER DELETION" << endl;
	cout << "������" << endl;
	printList();
	cout << "����" << endl;
	printListReverse();
}