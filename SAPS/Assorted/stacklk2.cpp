#include<iostream.h>
#include<conio.h>
#include<stddef.h>
#include<stdio.h>
#include<string.h>
struct node
{
	int rno;
	char name[20];
	node *next;
}*top,item;
void main()
{
	clrscr();
	node *ptr;
	int ch;
	top=NULL;
	node* newnode(node);
	void push(node*);
	node pop();
	void disp(node*);
	void quit(node*);
	do
	{
		clrscr();
		cout<<"\t\t\tLINKED STACK\n\n\t\tMenu\n  1. Push\n  2. Pop\n  3. Display\n  4. Exit\n  Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				clrscr();
				cout<<"\t\tPUSH\n\n  Enter the value to be pushed to the stack :\n\tRoll No : ";
				cin>>item.rno;
				cout<<"\tName : ";
				gets(item.name);
				ptr=newnode(item);
				if(ptr==NULL)
					cout<<"  Memory Error.The item canot be pushed to the stack.";
				else
				{
					push(ptr);
					cout<<"  Push operation successful.";
				}
				getch();
				break;
			case 2:
				clrscr();
				cout<<"\t\tPOP\n\n";
				if(top==NULL)
					cout<<"  Stack is empty.";
				else
				{
					item=pop();
					cout<<"  POP is successful.\n  Poped node is :\n\tRoll No. : "<<item.rno<<"\n\tName : "<<item.name;
				}
				getch();
				break;
			case 3:
				clrscr();
				cout<<"\t\tDispaly Stack\n\n";
				if(top==NULL)
					cout<<"  Stack is empty.";
				else
					disp(top);
				getch();
				break;
			case 4:
				quit(top);
				break;
			default:
				cout<<"Invalid choice.";
				getch();
		}
	}while(ch!=4);
}
node* newnode(node val)
{
	node *p;
	p = new node;
	if(p!=NULL)
	{
		p->rno=val.rno;
		strcpy(p->name,val.name);
		p->next=NULL;
	}
	return(p);
}
void push(node* p)
{
	if(top==NULL)
		top=p;
	else
	{
		p->next=top;
		top=p;
	}
}
node pop()
{
	node val;
	node *temp;
	temp=top;
	top=top->next;
	val=*temp;
	delete temp;
	return(val);
}
void disp(node* p)
{
	cout<<"  The elements of stack are : \n  Roll No.\tName\n";
	while(p!=NULL)
	{
		cout<<"  "<<p->rno<<"\t\t"<<p->name<<"\n";
		p=p->next;
	}
}
void quit(node* p)
{
	node *temp;
	while(p!=NULL)
	{
		temp=p;
		cout<<"\n  Deleting  "<<p->rno;
		p=p->next;
		delete temp;
	}
}








