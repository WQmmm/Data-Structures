/////Cstack.cpp//////
#include"Cstack.h"
#include<stdio.h>

Cstack::Cstack()         //构造函数
{
	top=EMPTY;
}

bool Cstack::empty()const       //判断栈空函数
{
	if(top==EMPTY)
		return true;
	else
		return false;
}

op_code Cstack::push()     //进栈函数
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

op_code Cstack::pop(element_type &x)    //退栈函数
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

int Cstack::display()
{
	return top+1;
}
