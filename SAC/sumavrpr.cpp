//To find the sum, average & product of 3 given numbers.
#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	int a,b,c,sum,avr,pro;
	cout<<"Enter the value of a:";
	cin>>a;
	cout<<"Enter the value of b:";
	cin>>b;
	cout<<"Enter the value of c:";
	cin>>c;
	sum=a+b+c;
	avr=sum/3;
	pro=a*b*c;
	cout<<"Sum="<<sum;
	cout<<"\nAverage="<<avr;
	cout<<"\nProduct="<<pro;
	getch();
}