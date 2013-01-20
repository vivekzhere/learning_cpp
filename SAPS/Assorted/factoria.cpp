#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	cout<<"Program to find the factorial of a number \n==========================================\n";
	int a,n=1,f=1;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Factorial is:";
	while(n<=a)
	{
		f*=n;
		n++;
	}
	cout<<f;
	getch();
	_exit(0);
}