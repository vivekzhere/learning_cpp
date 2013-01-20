#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<math.h>
int acn[30],ac[30],i,k=0;
char na[30][30],pw[30][15],t;
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
	gets(na[k]);
	cout<<"Enter a password : ";
	t=getch();
	for(i=0;t!=13;i++)
	{
		pw[k][i]=t;
		cout<<"*";
		t=getch();
	}
	pw[k][i]='\0';
	cout<<"\n";
	acn[k]=c*(c+1)*(c+2)*3;
   cout<<"Enter Initial Deposit : ";
	cin>>ac[k];
	cout<<"Your Account Number is : "<<acn[k];
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
		if(an==acn[i])
			if(strcmp(p,pw[i])==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				ac[i]+=d;
				cout<<"Current Balance : "<<ac[i];
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
		if(an==acn[i])
			if(strcmp(p,pw[i])==0)
			{
				cout<<"Enter amount : ";
				cin>>d;
				if(ac[i]-d<500)
				{
					cout<<"Amount is too large\nYour current Balance : "<<ac[i]<<"\nYou can withdraw amount upto : "<<(ac[i]-500);
					goto end;
				}
				else
				{
					ac[i]-=d;
					cout<<"Current Balance : "<<ac[i];
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
		if(an==acn[i])
			if(strcmp(p,pw[i])==0)
			{
				cout<<"Name : ";
				puts(na[i]);
				cout<<"Account Number : "<<acn[i]<<"\nCurrent Balance : "<<ac[i];
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
