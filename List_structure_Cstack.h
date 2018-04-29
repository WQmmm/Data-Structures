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
	op_code pop(element_type &x);
	op_code push();
	int show();
};
