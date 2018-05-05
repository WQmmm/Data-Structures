////////linklist.h/////////////
#include"stdio.h"
#include"linklist.h"

linkList::linkList()                 //构造函数
{
	head=new linkListNode;
	head->next=NULL;
}

linkList::~linkList()                //析构函数
{
	linkListNodeptr p;
	p=head;
	head=head->next;
	while(head!=NULL)
	{
		p=head;
		head=head->next;
		delete p;
	}
}

void linkList::creatlink()           //初始化链表
{
	linkListNodeptr p,q;
	p=head;
	int value;
	int c=1;
	printf("构造初始链表，请输入数据，以0结束!\n");
	while(c)
	{
		scanf("%d",&value);
		if(value==0)
		{
			c=0;
			break;
		}
		q=new linkListNode;
		q->data=value;
		q->next=NULL;
		p->next=q;
		p=q;
		printf("创建成功!\n");
	}
	printf("初始化完成!\n");
}

void linkList::insert()                  //插入函数
{
	linkListNodeptr p,q,r;
	r=new linkListNode;
	int i,value,count=0;
	printf("请输入要插入的位置（从0开始）:\n");
	scanf("%d",&i);
	printf("请输入要插入的数据:\n");
	scanf("%d",&value);
	r->data=value;
	r->next=NULL;
	p=head;
	q=p->next;
	while(q!=NULL)
	{
		if(count==i)     //若找到所要插入的位置则插入元素（i<length()）
		{
			if(q==NULL)         //在表尾处插入
				p->next=r;
			else 
			{
			r->next=q;          //在表头或表中插入
			p->next=r;
			printf("插入成功!\n");	
			}
			break;
		}                
		p=q;             //否则继续完后寻找指定的位置
		q=q->next;
		count++;
	}
	if(q==NULL)
		printf("插入失败!\n");
}

void linkList::remove()                            //删除函数
{
	linkListNodeptr p,q;
	p=head;
	q=p->next;
	int x;
	printf("请输入要删除的元素!\n");
	scanf("%d",&x);
	while(q!=NULL)     //查找所要删除元素的位置
	{
		if(q->data==x)
			break;	
		p=q;
		q=q->next;
	}
	if(q==NULL)
		printf("删除失败，链表中不存在这个元素!\n");
	else
	{
		if(p==head)       //删除表头结点
		{
			head->next=q->next;
			delete q;
		}
		else if(q==NULL)    //删除表尾结点
		{
			delete q;
		}
		else             //删除表中结点
		{
			p->next=q->next;
			delete q;
		}
		printf("删除成功!\n");
	}
}

void linkList::search()                            //查找函数
{
	int x;
	linkListNodeptr p;
	p=head->next;
	printf("请输入要查找的元素!\n");
	scanf("%d",&x);
	while(p!=NULL)
	{
		if(p->data==x)
		{
			printf("查找成功!\n");
			break;
		}
		p=p->next;
	}
	if(p==NULL)
		printf("查找失败，链表中不存在这个元素!\n");
}

void linkList::dispaly()                 //显示函数
{
	linkListNodeptr p;
	p=head->next;
	if(p==NULL)
	{
		printf("栈空\n");

	}
	else
	{
		printf("栈中元素为:");
		while(p!=NULL)
		{
			printf("%d    ",p->data);
			p=p->next;
		}
		printf("\n\n");
	}
}

void linkList::length()
{
	linkListNodeptr p;
	int count=0;
	p=head->next;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	printf("链表的长度为:%d\n",count);

}
