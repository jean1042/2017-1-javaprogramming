#include <iostream>
using namespace std;


class Node {
public:
	int score;
	Node *link;

};

Node *Head = NULL;


//�ڷḦ ���ʴ�� ����ϴ� �Լ�
void printList()
{
	if (Head == NULL) return;
	else {
		Node *list = Head;
		do {
			cout << list->link->score << endl;
			list = list->link;
			}
			while (list != Head);


		}
	}



//��������Ʈ�� �ǳ��� �߰��ϱ�
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL) { // �� ����Ʈ�� ��� 1��¥�� ����Ʈ �������
		new_node->link = new_node;
		Head = new_node;

		// ���ο� ��尡 ������ 
	}

	else { // ������ ��带 ã��
		new_node->link = Head->link;
		Head->link = new_node;
		Head = new_node;
	}

}






void main()
{
	while (1) //while(true) -> ���ѷ����� �ǹ���
	{
		int value;

		cout << "���� ���� �Է��ϼ��� (�������� ������ �Է��ϼ���) : ";
		cin >> value;

		if (value < 0) break;

		Node *new_node;

		new_node = new Node;
		new_node->score = value;
		new_node->link = NULL;


		//����Ʈ�� ó���� ����
		insert_node_at_rear(new_node);
	}

	printList();


	////////////////////////

	// REVERSE THE LIST
	Node *p, *q, *r;
	p = Head;
	q = NULL;
	r = NULL;

	while (p != NULL) {

		r = q; //q backup
		q = p; //p backup
		p = p->link; //move to next node
		q->link = r; //reverse the node
	}
	Head = q;



	// ����Ʈ ��� Ȯ��
	cout << "AFTER REVERSING LIST" << endl;
	printList();


}