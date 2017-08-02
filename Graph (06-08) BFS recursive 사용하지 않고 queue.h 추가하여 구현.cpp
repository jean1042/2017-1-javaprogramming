/*
recursive ������� ��������
������� �߰��ϰ� ����
*/

//BFS ���� 
#include <iostream>
#include <string> 

using namespace std;

#define NODE_NUM 8 // ����� ����

int adj[NODE_NUM][NODE_NUM] = //������� 
{ 0, 1, 1, 0, 0, 0, 0, 0,
1, 0, 0, 1, 1, 0, 0, 0,
1, 0, 0, 0, 0, 1, 1, 0,
0, 1, 0, 0, 0, 0, 0, 1,
0, 1, 0, 0, 0, 0, 0, 1,
0, 0, 1, 0, 0, 0, 0, 1,
0, 0, 1, 0, 0, 0, 0, 1,
0, 0, 0, 1, 1, 1, 1, 0 };

string name[NODE_NUM] = { "v1", "v2", "v3", "v4", "v5", "v6", "v7", "v8" };

bool visited[NODE_NUM] = {}; // �湮�ߴ��� ���ߴ��ĸ� Ȯ���ϴ� ���/ ��簪�� 0���εд�/ {0}���� ���� ��!!

void print_node(int v)
{
	cout << name[v] << endl;
}

#include "Queue.h"

QUEUE MyQueue;

void BFS(int v) {

	MyQueue.enQueue(v);

	while (!MyQueue.is_empty()) {
		v = MyQueue.deQueue();

		if (visited[v] != 0)continue;
		else visited[v] = 1;

		print_node(v);

		for (int i = 0; i <= NODE_NUM; i++)
		{
			if (adj[v][i] == 0) continue; //������ ������ �ǳʶپ��
			if (visited[i] != 0) continue;
			MyQueue.enQueue(i);
		}
	}

}

void main()
{
	BFS(0);
}