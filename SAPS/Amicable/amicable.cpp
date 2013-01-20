#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int a1,sum1=0,sum2=0,a2,n=1;
	cout<<"Enter 2 numbers:";
	cin>>a1>>a2;
	while(n<a1)
	{
		if(a1%n==0)
			sum1+=n;
		n++;
	}
	n=1;
	while(n<a2)
	{
		if(a2%n==0)
			sum2+=n;
		n++;
	}
	if(sum1==a2&&sum2==a1)
		cout<<"Amicable";
	else
		cout<<"Not Amicable";
	getch();
	_exit(0);
}