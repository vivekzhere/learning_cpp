#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	cout<<"Program to check whether a number is included in fibonacci series\n=================================================================\n";
	int a,n=1,m=0,t=1,c=0;
	cout<<"Enter a number:";
	cin>>a;
	if(a==0)
		cout<<a<<" is included in the fibonacci series";
	while(t<=a)
	{
		t=m+n;
		if(t==a)
		{
			cout<<a<<" is included in the fibonacci series";
			c++;
		}
		m=n;
		n=t;
	}
	if(c==0)
   	cout<<a<<" is not included in the fibonacci series";

	getch();
	_exit(0);
}