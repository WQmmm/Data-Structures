#include<stdio.h>
#include"node.h"

int main()
{
	Information Info;
	int c;
	Info.creatlist();
	printf("初始化成功!");
	printf("1.显示图书信息    2.查找图书    3.删除图书    0.退出\n");
	while(1)
	{
	
		printf("请选择所要进行的操作:");
		scanf("%d",&c);
		switch(c)
		{
		case 0:
			break;
		case 1:
			Info.display();
			break;
		case 2:
			int x;
			x=Info.search();
			if(x==1)
				printf("查找成功!\n");
			else
				printf("该书籍不存在!\n");
			break;
		case 3:
			int y;
			x=Info.remove();
			if(x==1)
				printf("删除成功!\n");
			else
				printf("删除失败!\n");
			break;
		default:
			printf("输入有误，请重新输入!\n");
		}
		if(c==0)
			break;
	}
	return 0;
}


