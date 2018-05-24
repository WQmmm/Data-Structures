///////////Information.cpp////////////
#include<stdio.h>
#include"Information.h"

Information::Information()             //构造函数
{
	head=new Node;					 //为头结点申请空间
	head->next=NULL;	             //头结点置空
}

Information::~Information()            //析构函数
{
	Node *p;
	p=head;
	head=head->next;
	while(head!=NULL)
	{
		p=head;
		head=head->next;
		delete p;
	}
}

void Information::creatlist(int n)     //初始化函数
{
	Node *p,*q;						  //定义指针p
	printf("请输入要存的书籍的数量:");
	scanf("%d",&n);
	p=head;
	for(int i=0;i<n;i++)
	{
	    q=new Node;
		printf("请输入书名:");
		scanf("%s",&p->book_name);
		printf("请输入作者姓名:");
		scanf("%s",&p->author_name);
		printf("请输入总库数量:");
		scanf("%d",&p->total_count);
		q->next=NULL;
		p->next=q;
		p=q;
	}

}

void Information::insert()        //插入函数
{

}

void Information::search()        //查找函数
{

}

void Information::remove()        //删除函数
{

}

void Information::display()       //显示函数
{	
	Node *p;
	p=head;
	while(p->next!=NULL)
	{
		printf("书名:%s\n",p->book_name);
		printf("作者姓名:%s\n",p->author_name);
		printf("总库数量:%d\n",p->total_count);
		p=p->next;
	
	}
	printf("\n");
}
