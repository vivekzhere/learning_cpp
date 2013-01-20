#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	int g,s,n,i=1,j;
	cout<<"Enter number of numbers:";
	cin>>j;
	cout<<j<<" numbers:";
	cin>>n;
	g=n,s=n;
	while(i<j)
	{
		cin>>n;
		if(n>g)
			g=n;
		else if(s>n)
			s=n;
		i++;
	}
	cout<<"large="<<g<<"\tsmall="<<s;
	getch();
	_exit(0);
}