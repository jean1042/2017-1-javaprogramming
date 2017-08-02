#include <iostream>
using namespace std;

#define NODENUM 8

class Node{
public:
	int score;
	Node *link;

};

Node *Head=NULL;


//�ڷḦ ���ʴ�� ����ϴ� �Լ�
void printList()
{
	
	for (Node *list=Head; list != NULL ; list=list->link)
	{
		cout << list->score << endl;
		
	}

}

//����Ʈ�� ó���� �����ϴ� �Լ�
void insert_node_at_front(Node *new_node)
{
		new_node->link=Head;
		Head= new_node;
}
//����Ʈ�� �������� ��� �����ϴ� �Լ�
void insert_node_at_rear(Node *new_node)
{
	if (Head ==NULL)  // �� ����Ʈ��
		Head=new_node;
	
	else { // ������ ��带 ã��
		Node *list=Head;

		while ( list->link !=NULL)
		list=list->link;
		list->link=new_node;
		}
	
}
	





void main()
{
	//8�� �ڷḦ ���Ḯ��Ʈ�� ����
	for (int i=0; i<NODENUM ; i++)
	{
		Node *new_node;

		new_node =new Node;
		cout << "���� ���� �Է��ϼ��� : ";
		cin >> new_node-> score;
		new_node->link=NULL;

		//����Ʈ�� ó���� ����
		insert_node_at_front(new_node);
	}

	printList();
	
	
}