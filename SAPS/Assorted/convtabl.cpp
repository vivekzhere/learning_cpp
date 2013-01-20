#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,n;
	long int bin(int),oct(int);
	void hex(int);
	cout<<"Enter limit : ";
	cin>>n;
	clrscr();
	cout<<"Decimal\tBinary\tOctal\tHexa Decimal\n";
	for(i=1;i<=n;i++)
	{
		cout<<i<<"\t"<<bin(i)<<"\t"<<oct(i)<<"\t";
		hex(i);
		if(i%24==0)
			getch();
	}
	getch();
}
long int bin(int a)
{
	int i,d;
	for(i=0,d=0;a>0;i++,a/=2)
		d+=(a%2)*pow(10,i);
	return(d);
}
long int oct(int a)
{
	int i;
	int d;
	for(i=0,d=0;a>0;i++,a/=8)
		d+=(a%8)*pow(10,i);
	return(d);
}
void hex(int a)
{
	int r,i;
	char h[15];
	for(i=0;a>0;i++,a/=16)
	{
		r=a%16;
		if(r<10)
			h[i]=(char)r+48;
		else
			h[i]=(char)r+55;
	}
	h[i]='\0';
	strrev(h);
	puts(h);
}
