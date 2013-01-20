#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void main()
{
	clrscr();
	cout<<"Program to find the decimal equivalent of a hexa-decimal number\n===============================================================\n";
	long int n,r,de=0;
	int i=0;
	cout<<"Enter a hexa decimal number:";
	cin>>n;
	while(n>0)
	{
		r=fmod(n,10);
		n=n/10;
		de+=r*pow(16,i);
		i++;
	}
   cout<<"Decimal equivalent : "<<de;

	getch();
	_exit(0);
}