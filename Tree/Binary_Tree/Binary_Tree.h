#include<iostream>
#define element_type char
using namespace std;

typedef struct Bnode{
	element_type data;
	Bnode *Rson,*Lson;
}Bnode,*Bptr;

//利用先序序列和中序序列构造二叉树
Bptr create(element_type a[], element_type b[], int i, int j, int s, int t);

//访问根节点
void visit(Bptr p);

//先序遍历
void preOrder(Bptr p);

//中序遍历
void inOrder(Bptr p);

//后序遍历
void postOrder
