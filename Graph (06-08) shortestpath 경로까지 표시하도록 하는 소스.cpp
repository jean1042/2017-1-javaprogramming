#include <iostream>
using namespace std;

#define NODE_NUM 7 // ����� ����
#define INF 9999 // ���Ѵ�

int Weight[NODE_NUM][NODE_NUM] =
{ 0, 7, INF, INF, 3, 10, INF,
7, 0, 4, 10, 2, 6, INF,
INF, 4, 0, 2, INF, INF, INF,
INF, 10, 2, 0, 11, 9, 4,
3, 2, INF, 11, 0, INF, 5,
10, 6, INF, 9, INF, 0, INF,
INF, INF, INF, 4, 5, INF, 0 };


/*S ��� ������ �ϳ� ����
1. S �� �⺻������ 0���� �ʱ�ȭ �Ǿ� ����,
2. 0�̸� ���� ���Ĺ�ǥ ���Ѱ�@! */
bool S[NODE_NUM] = { 0 };

//�ִܰŸ��� ���ؼ� ���� �迭
int Distance[NODE_NUM];
int Path[NODE_NUM];
//distance �� Ȯ������ ���� ���Ĺ�ǥ ���� �ֵ� �߿��� distance ���� ���� �����ִ� �Ÿ� ã��
int choose_best() {
	int Min = INF;
	int best_node;

	for (int i = 0; i < NODE_NUM; i++) {
		if (S[i] != 0) continue; //���� ��ǥ �� �� ������ �ǳʶ�

								 //���� ��ǥ ���� ���� ��� �߿��� distance ���� ���� ���� ��带 ã��
		if (Distance[i] < Min) {
			Min = Distance[i];
			best_node = i;
		}
	}
	return best_node;
}




void shortest_path(int v) {
	//�迭 �ʱ�ȭ
	for (int i = 0; i < NODE_NUM; i++) {
		S[i] = 0;
		Distance[i] = Weight[v][i];
		Path[i] = v; //0������ 4�� ���� �Դٴ� ���� ����
	}//��� ����� weight �� ���� ����
	
	Distance[v] = 0;
	S[v] = 1;

	/*
	1. ����� ���� ��Ű�� ��尡 n-1�� ������
	2. n-2���� ������ ������ ������ �Ѱ��� ������ �������� ������
	3. node_num-2�� ���� ������ ��!*/

	for (int i = 0; i < NODE_NUM - 2; i++) {
		int u = choose_best(); //S[i] ��� �� Distance[]r�� ���� ���� ��带 u �� ���� (0�� ���� ª�� ��尡 4���̾����� u �� 4������ �����ϴ� ��)

		S[u] = 1;
		for (int w = 0; w < NODE_NUM; w++) {
			if (S[w] == 0) { //4���� ���� �߿��� ���� ���Ĺ�ǥ ���� ���� �ְ� ������
				if (Distance[w] > Distance[u] + Weight[u][w])
				{
					Distance[w] = Distance[u] + Weight[u][w]; //4�� ���ļ� �°Ŷ� ���� �ٷ� �� ���̶� ������ �� ���� ���� �� ��� ���ļ� �¾ָ� Distance�� ������
					Path[w] = u; //4�� ��尡 �� ���� �� �˾����� 1�� ��忡 4��� ���ڸ� ����� -> ��α��� �˰� �ϱ� ���ؼ�
				}
				}
		}



	}
}

void main() {
	shortest_path(0); //(����) �������� 0�� ���� ����
	cout << "Distance" << endl;
	//�ִ� �Ÿ� ���
	for (int i = 0; i < NODE_NUM; i++) {
		cout << "0 ==> " << i << " : " << Distance[i] << endl;
	}

	cout << "Path" << endl;
	//��� ���
	for (int i = 0; i < NODE_NUM; i++) {
		cout <<i<< ":" <<Path[i] << endl;
	}
}

