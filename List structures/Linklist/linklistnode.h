////////linklistnode.h//////////
class linkList;
 
class linkListNode
{
friend class linkList;
public:
	linkListNode(int d=0,linkListNode *link=NULL):data(d),next(link){}
private:
	int data;
	linkListNode *next;
};

typedef linkListNode *linkListNodeptr;
