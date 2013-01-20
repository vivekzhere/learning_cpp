//To print the multiplication table of a given number. 
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,n,p;
	cout<<"Enter the number:";
   cin>>a;
	for(n=1;n<=20;n++)
	{
		p=a*n;
		cout<<a<<"*"<<n<<"="<<p<<"\n";
	}
	getch();
}