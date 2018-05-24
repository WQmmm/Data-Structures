#define SIZE 50

struct Node
{
	char book_name[SIZE];           //书名
	char author_name[SIZE];         //作者姓名
	int number;			            //书单列表
 	int total_count;		        //总库存量
	int count;		                //现库存量
	Node *next;
};


class Information
{
public:
	Information();               //构造函数
	~Information();              //析构函数
	void creatlist(int n);           //初始化链表
	void search();              //查找函数
	void insert();              //插入函数
	void remove();              //删除函数
	void display();             //线束函数
private:
	Node *head;     //头指针     
};
