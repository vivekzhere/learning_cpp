#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	struct stud
	{
		int rn,m[5],tot,rk;
		char na[30],gd[15];
	};
	stud a[50],t;
	int i,j,n,c[5]={0,0,0,0,0};
	cout<<"Enter no of students : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		clrscr();
		cout<<"Enter Name of student : ";
		gets(a[i].na);
		cout<<"Enter Roll No of student : ";
		cin>>a[i].rn;
		cout<<"Enter 5 marks of student : ";
		a[i].tot=0;
		for(j=0;j<5;j++)
		{
			cin>>a[i].m[j];
			a[i].tot+=a[i].m[j];
		}
		for(j=0;j<5;j++)
			if(a[i].m[j]<40)
			{
				strcpy(a[i].gd,"Failed");
				c[4]++;
				goto tag;
			}
		if(a[i].tot>425)
		{
			strcpy(a[i].gd,"Distinction");
			c[0]++;
		}
		else if(a[i].tot>350)
		{
			strcpy(a[i].gd,"First Class");
			c[1]++;
		}
		else if(a[i].tot>275)
		{
			strcpy(a[i].gd,"Second Class");
			c[2]++;
		}
		else if(a[i].tot>200)
		{
			strcpy(a[i].gd,"Third Class");
			c[3]++;
		}
		tag:
	}
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(a[i].tot<a[j].tot)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	for(i=0;i<n;i++)
		a[i].rk=i+1;
	for(i=0;i<n;i++)
		for(j=i;j<n;j++)
			if(a[i].rn>a[j].rn)
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
	clrscr();
	cout<<"Roll No.Name\t\tMarks\t\tTotal\tGrade\t\tRank\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i].rn<<"\t"<<a[i].na<<"\t";
		for(j=0;j<5;j++)
			cout<<a[i].m[j]<<"  ";
		cout<<"\t"<<a[i].tot<<"\t"<<a[i].gd<<"\t"<<a[i].rk<<"\n";
	}
	cout<<"\n\t\tBar Chart\n\nDistinction\t|";
	for(i=0;i<c[0];i++)
		cout<<"*";
	cout<<"\nFirst Class\t|";
	for(i=0;i<c[1];i++)
		cout<<"*";
	cout<<"\nSecond Class\t|";
	for(i=0;i<c[2];i++)
		cout<<"*";
	cout<<"\nThird Class\t|";
	for(i=0;i<c[3];i++)
		cout<<"*";
	cout<<"\nFailed\t\t|";
	for(i=0;i<c[4];i++)
		cout<<"*";
	getch();
}

