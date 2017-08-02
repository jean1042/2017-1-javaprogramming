#include <iostream>
using namespace std;

typedef int element;
class TreeNode {
public:
	element data;
	TreeNode *left, *right;

	//������ �Լ�
	TreeNode(int x) {
		data = x;
		left = right = NULL;

	}
};

//����ϴ� �˰���
element evaluate(TreeNode *root) {
	if (root == NULL) return 0;
	else if (root->left == NULL && root->right == NULL) //�ܸ�����
		return root->data;
	else {
		int left_value = evaluate(root->left);
		int right_value = evaluate(root->right);

		if (root->data == '*') return left_value * right_value;
		if (root->data == '+') return left_value + right_value;
		if (root->data == '-') return left_value - right_value;
		if (root->data == '/') return left_value / right_value;


	}



//	evaluate(root->left);
	//�� �ڸ��� cout ���� ��ġ�ϸ� ����ǥ���
	
	//evaluate(root->right);
	//�� �ڸ��� cout ���� ��ġ�ϸ� ����ǥ���


}
void main() {
	//Ʈ�� ������ �Է� �޾� �ش� Ʈ���� ����
	TreeNode *n1 = new TreeNode(3);
	TreeNode *n2 = new TreeNode(2);
	TreeNode *n3 = new TreeNode('*');
	TreeNode *n4 = new TreeNode(5);
	TreeNode *n5 = new TreeNode(6);
	TreeNode *n6 = new TreeNode('*');
	TreeNode *root = new TreeNode('+');


	n3->left = n1;
	n3->right = n2;
	n6->left = n4;
	n6->right = n5;
	root->left = n3;
	root->right = n6;

	cout << evaluate(root);
	cout << endl;

}