/////Cstack.h/////
#define EMPTY -1
typedef int op_code;

typedef int element_type;
const int M=1000;

class Cstack
{
private:
	int top;
	element_type s[M];
public:
	Cstack();
	bool empty()const;
	op_code pop(element_type &x);      //退栈函数声明
	op_code push();                    //进栈函数声明
	int display();                     //查看栈中元素个数函数声明
	int show();
};
