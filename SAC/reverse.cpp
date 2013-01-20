//To print a number in the reverse order.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long n,r,rev=0;
	cout<<"Enter a number:";
	cin>>n;
	do
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}while(n>0);
	cout<<"Reverse="<<rev;

	getch();
}