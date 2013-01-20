#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
   cout<<"Program to find the divisors of a number \n========================================\n";
	int a,n=1;
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Divisors are:\n";
	while(n<=a)
	{
		if(a%n==0)
			cout<<n<<"\t";
		n++;
	}

	getch();
	_exit(0);
}