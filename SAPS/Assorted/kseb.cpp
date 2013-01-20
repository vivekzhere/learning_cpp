#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	struct a
	{
		int cn,cr,pr,u,ch;
		char na[30];
	};
	int n,i,j;
	a c[50];
	cout<<"Enter no of consumers : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		clrscr();
		cout<<"Enter Name, Cunsumer number, Current Reading & Previous Reading of "<<(i+1)<<" th consumer:\n";
		gets(c[i].na);
		cin>>c[i].cn>>c[i].cr>>c[i].pr;
		c[i].u=c[i].cr-c[i].pr;
		if(c[i].u>600)
			c[i].ch=(200*.5)+(200*.6)+(200*.8)+c[i].u-600;
		else if(c[i].u>400)
			c[i].ch=(200*.5)+(200*.6)+(c[i].u-400)*.8;
		else if(c[i].u>200)
			c[i].ch=(200*.5)+(c[i].u-200)*.6;
		else
			c[i].ch=c[i].u*.5;
	}
	clrscr();
	cout<<"Name\tC.N.\tUnit\tCharge";
	for(i=0;i<n;i++)
	{
		cout<<"\n";
		for(j=0;c[i].na[j]!='\0';j++)
			cout<<c[i].na[j];
		cout<<"\t"<<c[i].cn<<"\t"<<c[i].u<<"\t"<<c[i].ch;
	}
   getch();
}