
/////Cstack.cpp//////
#include"Cstack.h"
#include<stdio.h>

Cstack::Cstack()
{
	top=EMPTY;
}

bool Cstack::empty()const
{
	if(top==EMPTY)
		return true;
	else
		return false;
}

op_code Cstack::push()
{
	if(top==M-1)
		return 0;
	else
	{
		printf("请输入要入栈的数！\n");
		int x;
		scanf("%d",&x);
		s[++top]= x;
		return 1;
	}
}

op_code Cstack::pop(element_type &x)
{
	if(top==EMPTY)
		return 0;
	else
	{
		x=s[top];
		top--;
	}
	return 1;
}

int Cstack::show()
{
	return s[top];
}
