//To Create a 2D array & find the sum & average of its elements.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20][20],i,j,r,c,s=0;
   float av;
	cout<<"Enter no:of rows:";
	cin>>r;
	cout<<"Enter no:of columns:";
	cin>>c;
	cout<<"Enter Elements\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
			s=s+a[i][j];
		}
	av=s/(r*c);
	clrscr();
	cout<<"Sum="<<s<<"\nAverage="<<av<<"\n";
	cout<<"Array\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	getch();
}