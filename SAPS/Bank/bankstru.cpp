#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
struct cust
{
	long int acn,ac;
	char na[30],pw[15];
};
int i,k=0;
char t;
cust a[50];
void main()
{
	int c=5,m;
	top:
	clrscr();
	cout<<"1. Create New Account\n2. Deposit\n3. Withdraw\n4. View Account\n5. Exit\nEnter your choice : ";
	cin>>m;
	void CA(int), DP(), WD(), VA();
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
			break;
		default:
			cout<<"Wrong Chioce";
			getch();
			goto top;
	}
}
void CA(int c)
{
	clrscr();
	cout<<"Enter your name : ";
	gets(a[k].na);
	cout<<"Enter a password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		a[k].pw[i]=t;
		cout<<"*";
		t=getch();
	}
	a[k].pw[i]='\0';
	cout<<"\n";
	a[k].acn=c*(c+1)*(c+2)*4;
	cout<<"Enter Initial Deposit : ";
	cin>>a[k].ac;
	cout<<"Your Account Number is : "<<a[k].acn;
	k++;
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
	for(i=0;i<k;i++)
	{
		if(an==a[i].acn)
			if(strcmp(p,a[i].pw)==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				a[i].ac+=d;
				cout<<"Current Balance : "<<a[i].ac;
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
	for(i=0;i<k;i++)
	{
		if(an==a[i].acn)
			if(strcmp(p,a[i].pw)==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				if(a[i].ac-d<500)
				{
					cout<<"Amount is too large\nYour current Balance : "<<a[i].ac<<"\nYou can withdraw amount upto : "<<(a[i].ac-500);
					goto end;
				}
				else
				{
					a[i].ac-=d;
					cout<<"Current Balance : "<<a[i].ac;
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
	for(i=0;i<k;i++)
	{
		if(an==a[i].acn)
			if(strcmp(p,a[i].pw)==0)
			{
				cout<<"Name : ";
				puts(a[i].na);
				cout<<"Account Number : "<<a[i].acn<<"\nCurrent Balance : "<<a[i].ac;
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