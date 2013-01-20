//To display the price & code of 5 items.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,c[5],p[5];
	for(i=0;i<5;i++)
	{
		cout<<"enter the code of item "<<i+1<<":";
		cin>>c[i];
		cout<<"Enter the price of item "<<i+1<<":";
		cin>>p[i];
	}
	cout<<"Code\tPrice\n";
	for(i=0;i<5;i++)
		cout<<c[i]<<"\t  "<<p[i]<<"\n";
	getch();
}