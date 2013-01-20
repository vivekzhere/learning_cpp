#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	cout<<"Program to print the fibonacci series up to a limit\n===================================================\n";
	int a,n=1,m=0,t;
	cout<<"Enter the limit:";
	cin>>a;
	cout<<"Fibonacci series is:\n"<<m<<"\t"<<n<<"\t";
	while(m!=-1)
	{
		t=m+n;
		if(t<=a)
		{
			cout<<t<<"\t";
			m=n;
			n=t;
		}
		else
			m=-1;
	}

	getch();
	_exit(0);
}