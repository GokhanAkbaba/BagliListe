#include <iostream>
#include <string>
using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

void createNode(int new_data)
{
	node *temp = new node();
	temp ->data=new_data;
	temp ->next=NULL;
	
	if(head == NULL)
	{
		head=temp;
		tail=temp;
		temp=NULL;
	}
	else
	{
		tail ->next=temp;
		tail=temp;
	}
}
void display()
{
	node *temp=new node();
	temp=head;
	while(temp != NULL)
	{
		cout << temp ->data << "\t";
		temp=temp ->next;
	}
	
}
void insert_start(int new_data)
{
	node *temp=new node();
	temp ->data=new_data;
	temp ->next=head;
	head=temp;
}
void insertPosition(int pos, int value)
{
	node *pre=new node();
	node *cur=new node();
	node *temp=new node();
	
	cur=head;
	
	for (int i=0;i<pos;i++)
	{
		pre=cur;
		cur=cur ->next;
	}
	
	temp ->data=value;
	pre ->next=temp;
	temp ->next=cur;
}
void delete_first()
{
	node *temp=new node();
	temp=head;
	head=head->next;
	delete temp;
}
void delete_last()
{

	node *cur=new node();
	node *pre=new node();
	
	cur=head;
	while(cur->next !=NULL)
	{
		pre=cur;
		cur=cur->next;
	}
	tail=pre;
	pre->next=NULL;
	delete cur;
}
void delete_position(int pos)
{
	node *cur=new node();
	node *pre=new node();
	
	cur =head;
	
	for(int i=0;i<pos;i++)
	{
		pre=cur;
		cur=cur->next;
	}
	pre->next=cur->next;
}
int main()
{
		createNode(36);
	createNode(58);
	createNode(360);

	display();
}
