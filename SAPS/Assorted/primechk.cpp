#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
   cout<<"Program to check whether a number is a prime\n============================================\n";
	int a,n=2,c=0;
	cout<<"Enter a number:";
	cin>>a;
	while(n<a)
	{
		if(a%n==0)
		{
			c++;
			break;
		}
		n++;
	}
	if(c==0)
		cout<<"Prime";
	else
		cout<<"Not Prime";

	getch();
	_exit(0);
}