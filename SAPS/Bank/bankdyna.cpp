#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
struct cust
{
	long int acn,ac;
	char na[30],pw[15];
	cust *next;
}*start,*temp,*npm;
int i;char t;
void main()
{
	int c=5,m;
	top:
	clrscr();
	cout<<"1. Create New Account\n2. Deposit\n3. Withdraw\n4. View Account\n5. Delete Account\n6. Exit\nEnter your choice : ";
	cin>>m;
	void CA(int), DP(), WD(), VA(),DA();
	switch(m)
	{
		case 1:
			c++;
			CA(c);
			getch();
			goto top;
		case 2:
			DP();
			getch();
			goto top;
		case 3:
			WD();
			getch();
			goto top;
		case 4:
			VA();
			getch();
			goto top;
		case 5:
			DA();
			getch();
			goto top;
		case 6:
			break;
		default:
			cout<<"Wrong Chioce";
			getch();
			goto top;
	}
	for(npm=start;npm!=NULL;npm=temp)
	{
		temp=npm->next;
		cout<<"\nDeleting "<<npm->na;
		delete npm;
	}
}
void CA(int c)
{
	clrscr();
	npm=new cust;
	if(npm==NULL)
	{
		cout<<"Sorry..Insufficient memory";
		getch();
		return;
	}
	if(start==NULL)
	{
		start=npm;
		start->next=NULL;
	}
	else
	{
		npm->next=start;
		start=npm;
	}
	cout<<"Enter your name : ";
	gets(start->na);
	cout<<"Enter a password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		start->pw[i]=t;
		cout<<"*";
		t=getch();
	}
	start->pw[i]='\0';
	cout<<"\n";
	start->acn=c*(c+1)*(c+2)*4;
	cout<<"Enter Initial Deposit : ";
	cin>>start->ac;
	cout<<"Your Account Number is : "<<start->acn;
}
void DP()
{
	clrscr();
	int d,an;
	char p[10];
	cout<<"Enter your Account Number : ";
	cin>>an;
	cout<<"Enter password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		p[i]=t;
		cout<<"*";
		t=getch();
	}
	p[i]='\0';
	cout<<"\n";
	for(npm=start;npm!=NULL;npm=npm->next)
	{
		if(an==npm->acn)
			if(strcmp(p,npm->pw)==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				npm->ac+=d;
				cout<<"Current Balance : "<<npm->ac;
				goto end;
			}
			else
			{
				cout<<"Password is incorrect ";
				goto end;
			}
	}
	cout<<"Account Number is incorrect";
	end:;
}
void WD()
{
	clrscr();
	int d,an;
	char p[10];
	cout<<"Enter your Account Number : ";
	cin>>an;
	cout<<"Enter password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		p[i]=t;
		cout<<"*";
		t=getch();
	}
	p[i]='\0';
	cout<<"\n";
	for(npm=start;npm!=NULL;npm=npm->next)
	{
		if(an==npm->acn)
			if(strcmp(p,npm->pw)==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				if(npm->ac-d<500)
				{
					cout<<"Amount is too large\nYour current Balance : "<<npm->ac<<"\nYou can withdraw amount upto : "<<(npm->ac-500);
					goto end;
				}
				else
				{
					npm->ac-=d;
					cout<<"Current Balance : "<<npm->ac;
					goto end;
				}
			}
			else
			{
				cout<<"Password is incorrect ";
				goto end;
			}
	}
	cout<<"Account Number is incorrect";
	end:;
}
void VA()
{
	clrscr();
	int an;
	char p[10];
	cout<<"Enter your Account Number : ";
	cin>>an;
	cout<<"Enter password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		p[i]=t;
		cout<<"*";
		t=getch();
	}
	p[i]='\0';
	cout<<"\n";
	for(npm=start;npm!=NULL;npm=npm->next)
	{
		if(an==npm->acn)
			if(strcmp(p,npm->pw)==0)
			{
				cout<<"Name : ";
				puts(npm->na);
				cout<<"Account Number : "<<npm->acn<<"\nCurrent Balance : "<<npm->ac;
				goto end;
			}
			else
			{
				cout<<"Password is incorrect ";
				goto end;
			}
	}
	cout<<"Account Number is incorrect";
	end:;
}
void DA()
{
	clrscr();
	int an;
	char ch;
	char p[10];
	cout<<"Enter your Account Number : ";
	cin>>an;
	cout<<"Enter password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		p[i]=t;
		cout<<"*";
		t=getch();
	}
	p[i]='\0';
	cout<<"\n";
	for(npm=start,temp=start;npm!=NULL;npm=npm->next)
	{

		if(an==npm->acn)
			if(strcmp(p,npm->pw)==0)
			{
				cout<<"Are You sure you want to delete the account(Y/N) : ";
				cin>>ch;
				if(ch=='Y'||ch=='y')
				{
               if(npm==start)
						start=npm->next;
					else if(npm->next==NULL)
						temp->next=NULL;
					else
						temp->next=npm->next;
					delete npm;
					cout<<"Account is deleted.";
					getch();
				}
				else
				{
					cout<<"Account will not be deleted";
					getch();
				}
				goto end;
			}
			else
			{
				cout<<"Password is incorrect ";
				goto end;
			}
		temp=npm;
	}
	cout<<"Account Number is incorrect";
	end:;
}
