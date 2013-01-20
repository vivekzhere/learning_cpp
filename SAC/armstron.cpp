//To find the sum of the cubes of the digits of a given number & check whether it is amstrong.,
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long n,r,sum=0,a;
	cout<<"Enter a number:";
	cin>>n;
	a=n;
	do
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}while(n>0);
	cout<<"Sum="<<sum<<"\n";
	if(sum==a)
		cout<<a<<" is amstrong";
	else
		cout<<a<<" is not amstrong";
	getch();
}