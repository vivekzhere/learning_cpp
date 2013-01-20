#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	long int bs[50],hra[50],ta[50],da[50],gs[50],tax[50],ns[50];
	int i,n;
	char na[50][30];
	cout<<"No of employees : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Name & Basic salary of "<<(i+1)<<" th employee :\n";
		gets(na[i]);
		cin>>bs[i];
		hra[i]=.12*bs[i];
		ta[i]=.05*bs[i];
		da[i]=.07*bs[i];
		gs[i]=bs[i]+hra[i]+ta[i]+da[i];
		tax[i]=.05*gs[i];
		ns[i]=gs[i]-tax[i];
	}
	clrscr();
	cout<<"Name\tBasic Salary\tHRA\tTA\tDA\tGS\tTax\tNet Salary\n";
	for(i=0;i<n;i++)
		cout<<na[i]<<"\t"<<bs[i]<<"\t\t"<<hra[i]<<"\t"<<ta[i]<<"\t"<<da[i]<<"\t"<<gs[i]<<"\t"<<tax[i]<<"\t"<<ns[i]<<"\n";
	getch();
}