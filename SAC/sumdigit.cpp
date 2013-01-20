//To find the sum of the digits of a given number.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n,r,sum=0;
	cout<<"Enter a number:";
	cin>>n;
	do
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}while(n>0);
	cout<<sum;

	getch();
}