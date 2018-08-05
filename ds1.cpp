#include <iostream>
using namespace std;

struct node
{
  int val;
  node *next;
};
class sls
{
    node *start;

    public:
    sls()
    {
        this->start=NULL;
    }
    void inbig(int val)
    {
        node *temp=new node;
        temp->val=val;
        temp->next=NULL;
        if(start==NULL)
        {
            start=temp;
        }
        else
        {
            temp->next=start;
            start=temp;
        }
    }
    void inend(int val)
    {
        node *temp=new node;
        temp->val=val;
        temp->next=NULL;

        if(start!=NULL)
        {
             node *p=start;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;
        }
    }
    void dell()
    {
       node *temp=start;
       node *q;
       while(temp->next!=NULL)
       {
           q=temp;
           temp=temp->next;
       }
       free(temp);
       q->next=NULL;
    }
    void delf()
    {
        node *n;
        node *temp=start;
        n=temp->next;
        if(start!=NULL)
        {
              start=n;
              free(temp);
        }
    }
    node* create_node(int val)
    {
    	node *temp=new node;
    	temp->val=val;
    	temp->next=NULL;
    	return temp;
    }
    void insertafter(int x)
    {
    	struct node *p;
    	struct node *ptr;
    	p=create_node(9);
        struct node *temp;
        temp=start;
        while(temp->val!=5)
        {
        	temp=temp->next;
    	}
    	ptr=temp->next;
    	p->next=ptr;
    	temp->next=p;
    }
    void insert_before(int x)//no functionality of x in here
    {
    	struct node *p;
    	struct node *ptr;
    	p=create_node(7);
        struct node *temp;
        temp=start;
        while(temp->val!=5)
        {
        	ptr=temp;
        	temp=temp->next;
    	}
    	p->next=temp;
    	ptr->next=p;
    }
    void deleteafter()//only for the condition when we have elements both before and after the selected node;
    {
    	struct node *p;
    	struct node *ptr;
        struct node *temp;
        temp=start;
        while(temp->val!=5)
        {
        	temp=temp->next;
    	}
    	temp->next=ptr;
    	free(p);
    }
   void deletebefore(int x)
    {
	int val=x;
	struct node *p;
	struct node *temp;
	struct node *temp1;
	struct node *temp2;
	p=start;
	if(p->val==val)
	{
		cout<<"value cannot be deleted";
	}
	else
	while(p->val!=val)
	{
		temp=p;
		p=p->next;
	}
	if(temp!=start)
	{

	temp1=start;
	temp2=start;
	while(temp1!=temp)
	{
		temp2=temp1;
		temp1=temp1->next;
	}

	temp2->next=p;
	//free(temp);
	free(temp1);
}
else
delf();
}
    void display()
    {
        node *d=start;
        while(d!=NULL)
        {
            cout<<d->val<<" ";
            d=d->next;
        }
        cout<<endl;
    }

};
int main()
{
   char ch;
   sls s1;
   ch='a';

    s1.inbig(5);
    s1.inbig(6);
    s1.inbig(7);
    s1.insert_before(5);
    s1.insertafter(5);
    s1.deleteafter();
    s1.deletebefore(5);
    s1.inend(4);
    s1.inend(3);
    s1.inend(2);
    s1.dell();
    s1.delf();
   s1.display();
}

