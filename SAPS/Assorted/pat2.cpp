#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k;
	cout<<"Enter limit:";
	cin>>k;
	for(i=0;i<k;i++)
	{
		for(j=0;j<(k+i);j++)
		{
				if(j<(k-(i+1)))
					cout<<"  ";
				else
					cout<<"* ";
		}
		cout<<"\n";
	}
	getch();
}