//To find the sum of diagonal elementsof a 2D array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20][20],i,j,r,c,s=0;
	cout<<"Enter no:of rows:";
	cin>>r;
	cout<<"Enter no:of columns:";
	cin>>c;
	cout<<"Enter Elements\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	clrscr();
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
				s=s+a[i][j];
		}
	}
	cout<<"Sum of diagonal elements="<<s;
	getch();
}