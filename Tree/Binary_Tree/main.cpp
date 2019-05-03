#include"Binary_Tree.h"

int main()
{
	char a[] = {'A','B','D','G','C','E','F'};
	char b[] = {'D','G','B','A','E','C','F'};
	Bptr root;
	root = create(a,b,0,6,0,6);
	cout<<"先序遍历: ";
	preOrder(root);
	cout<<"中序遍历: ";
	inOrder(root);
	cout<<"后序遍历: ";
	postOrder(root);
	return 0;
}
