#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int n,le=0,lo=0;
	cout<<"Enter the numbers:";
	cin>>n;
	while(n!=0)
	{
		if(n%2==0)
		{
			if(le==0)
				le=n;
			else if(n>le)
				le=n;
		}
		if(n%2!=0)
		{
			if(lo==0)
				lo=n;
			else if(n>lo)
				lo=n;
		}
		cin>>n;
	}
	if(le==0&&lo==0)
		cout<<"No valid number was entered";
	else
	{
		if(le==0)
			cout<<"No valid even number was entered";
		else
			cout<<"Largest even:"<<le;
		if(lo==0)
			cout<<"\nNo valid odd number was entered";
		else
			cout<<"\nLargest odd:"<<lo;
	}
	getch();
	_exit(0);
}