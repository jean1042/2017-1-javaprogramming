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

	for (Node *list = Head; list != NULL; list = list->link)
	{
		cout << list->score << endl;

	}

}


//����Ʈ�� �������� ��� �����ϴ� �Լ�
void insert_node_at_rear(Node *new_node)
{
	if (Head == NULL)  // �� ����Ʈ��
		Head = new_node;


	else { // ������ ��带 ã��
		Node *list = Head;

		while (list->link != NULL)
			list = list->link;
		list->link = new_node;
	}

}






void main()
{
	while(1) //while(true) -> ���ѷ����� �ǹ���
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
	
	// ��带 ��������
	cout << "������� ����� ���� �Է��ϼ��� : ";
	int d_value;
	cin >> d_value;

	if (Head == NULL) 
		cout << "ERROR : No Node to delete" << endl;

	
	//ù ��尡 ������ ����� ���
	else if (Head->score ==d_value)
		Head=Head->link;
	

	else {
		for (Node *list = Head; list->link != NULL; list = list->link)
		{
			if (list->link->score == d_value) {

				list->link = list->link->link;
				break;
			}
				
		}
	
	
	
	
	}


	// ����Ʈ ��� Ȯ��
	cout << "AFTER NODE DELETION" << endl;
	printList();


}