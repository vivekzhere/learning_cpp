//To replace a value in an array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long i,n[5],a,l;
	cout<<"Enter 5 numbers\n";
	for(i=0;i<5;i++)
		cin>>n[i];
	cout<<"Enter a number:";
	cin>>a;
	cout<<"Enter a position:";
	cin>>l;
	n[l-1]=a;
	cout<<"\nNew Array";
	for(i=0;i<5;i++)
		cout<<"\n"<<n[i];
	getch();
}