#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int info;
	node *next;
}*start,*newptr,*save,*ptr;
node* create_new_node(int);
void insert_beg(node*);
void display(node*);
void main()
{
	clrscr();
	start=NULL;
	int inf;
	char ch='y';
	while(ch=='y'||ch=='Y')
	{
		cout<<"Enter the information for new node : ";
		cin>>inf;
		cout<<"\nCreating new node!!Press enter to continue..";
		getch();
		newptr=create_new_node(inf);
		if(newptr!=NULL)
		{
			cout<<"\n\nNew node created successfully.Pess enter to continue..";
			getch();
		}
		else
		{
			cout<<"\nCannot create new node!!!Aborting!!\n";
			getch();
			exit(1);
		}
		cout<<"\nNow inserting this node in the begining of list..\nPress enter to continue...\n";
		getch();
		insert_beg(newptr);
		cout<<"\nNow the list is : \n";
		display(start);
		cout<<"Press Y to enter more nodes, N to exit\n..";
		cin>>ch;
	}
	save=start;
	while(save!=NULL)
	{
		ptr=save->next;
		delete save;
      save=ptr;
	}
}
node* create_new_node(int n)
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return(ptr);
}
void insert_beg(node* np)
{
	if(start==NULL)
		start=np;
	else
	{
		save=start;
		start=np;
		np->next=save;
	}
}
void display(node* np)
{
	while(np!=NULL)
	{
		cout<<np->info<<"->";
		np=np->next;
	}
	cout<<"!!!\n";
}






