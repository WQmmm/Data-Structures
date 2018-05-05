//////////main.cpp////////////
#include"stdio.h"
#include"linkList.h"

int main()
{
	linkList clist;
	clist.creatlink();
	int x,c=1;
	while(c)
	{
		printf("请选择操作:1.显示链表中的元素  2.查找链表中的元素  3.插入元素  4.删除链表中的元素  5.显示链表长度  0.退出\n");
		scanf("%d",&x);
		switch(x)
		{
		case 0:
			c=0;
			break;
		case 1:
			clist.dispaly();
			break;
		case 2:
			clist.search();
			break;
		case 3:
			clist.insert();
			break;
		case 4:
			clist.remove();
			break;
		case 5:
			clist.length();
			break;
		default:
			printf("输入有误，请重新输入!\n\n");
			break;
		}
	}
	return 0;
}
