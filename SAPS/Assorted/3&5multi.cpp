#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	cout<<"Program to print multiples of 3 & 5 upto a limit\n================================================\n";
	int i=0,n;
	cout<<"Enter the limit:";
	cin>>n;
	cout<<"The multiples of 3 & 5 are:\n";
	while(i<=n)
	{
		if(i%3==0)
			cout<<i<<"\t";
		else if(i%5==0)
			cout<<i<<"\t";
		i++;
	}

	getch();
	_exit(0);
}