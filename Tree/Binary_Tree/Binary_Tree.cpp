#include"Binary_Tree.h"

Bptr create(element_type a[],element_type b[],int i,int j,int s,int t)
{
	if(i > j)
		return NULL;
	Bptr p = new Bnode;
	p->data = a[i];
	int k = s;
	while((k <= t)&&(b[k] != a[i])) k++;
	p->Lson = create(a,b,i+1,i+k-s,s,k-1);
	p->Rson = create(a,b,i+k-s+1,j,k+1,t);
	return p;
}


void visit(Bptr p)
{
	cout<<p->data<<" ";
}

void preOrder(Bptr p)
{
	if(p == NULL)
		return;
	visit(p);
	preOrder(p->Lson);
	preOrder(p->Rson);
}

void inOrder(Bptr p)
{
	if(p == NULL)
		return;
	inOrder(p->Lson);
	visit(p);
	inOrder(p->Rson);
}

void postOrder(Bptr p)
{
	if(p == NULL)
		return;
	postOrder(p->Lson);
	postOrder(p->Rson);
	visit(p);
}
