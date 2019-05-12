/////////main.cpp/////////
#include<stdio.h>
#include"Cstack.h"

int main()
{
	Cstack stack;
	int x;
	int y=1;
	int i,j;
	printf("========================\n");
	printf("请选择所要进行的操作:\n1.元素进栈\n2.元素退栈\n3.查看栈中元素个数\n0.退出\n");
	printf("========================\n");
	while(y)
	{
        printf("请选择所要进行的操作:\n");
		scanf("%d",&x);
		switch(x)
		{
		case 0:
		     	y=0;
				break;
		case 1:
		    	i=stack.push();
		    	if(i==1)
		    		printf("入栈成功\n");
		    	else 
		    		printf("入栈不成功\n");
				break;
		case 2:
		 		j=stack.pop(x);
				if(j==1)
				{
					printf("退栈成功\n");
			       	printf("退栈的元素为:%d\n",x);
				}
				else 
					printf("退栈不成功\n");
				break;
		case 3: 
				i=stack.display();
				if(i==0)
				{
					printf("栈空\n");
					break;
				}
				printf("栈中元素个数为:%d\n",i);
				break;
		default:
				printf("出入有误！请重新输入！\n");
		}
	}
    return 0;
}
