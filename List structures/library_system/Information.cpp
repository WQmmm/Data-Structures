///////////Information.cpp////////////
#include<stdio.h>
#include<string.h>
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

void Information::creatlist()       //初始化函数
{
	Node *p,*q;			    		//定义指针p
	int n;
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

int Information::search()        //查找函数
{
	Node *p;
	char book[SIZE];
	p=head;
	printf("请输入要查找的书名或作者名:");
    scanf("%s",&book);
	while(p!=NULL)
	{
		if(strcmp(book,p->book_name)==0 || strcmp(book,p->author_name)==0)                      //查找成功
		{
			return 1;          
		}
		p=p->next;
	}
	return 0;
}

int Information::remove()        //删除函数
{
	Node *p,*q;
	p=head;
	q=p->next;
	char book[SIZE];
	printf("请输入要删除的书籍:");
	scanf("%s",&book);
	while(q!=NULL)
	{
		if(strcmp(book,q->book_name)==0 || strcmp(book,q->author_name)==0)             //查找成功
		{	
			p->next=q->next;
			delete q;
			return 1;
		}
		p=q;
		q=q->next;
	}
   	return 0;
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
