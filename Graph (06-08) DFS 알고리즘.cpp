/*recursive ���� �ʰ� DFS �����ϱ� 
1. stack.h �߰��ϱ� 
2. ���� ���� ����
*/

#include <iostream>
#include <string>


using namespace std;
int element;

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

bool visited[NODE_NUM] = { 0 };//�ʱ�ȭ�� �� ���Ѿ��� -> ��� ���� 0���� �ʱ�ȭ

#include "Stack.h"
STACK MyStack;

void print_node(int v)
{
	cout << name[v] << endl;
}




void DFS(int v) {
	MyStack.push(v);

	while (!MyStack.is_empty()) {
		v = MyStack.pop();

		if (visited[v] != 0) continue;
		else visited[v] = 1;

		print_node(v);

		for (int i = 0; i < NODE_NUM; i++)
		{
			if (adj[v][i] == 0) continue;
			if (visited[i] != 0) continue;
			MyStack.push(i);
		}
	}



void main()
{
	DFS(0);
}