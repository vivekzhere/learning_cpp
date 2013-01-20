//To Create a 2D array & display its transpose.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20][20],i,j,r,c;
	cout<<"Enter no:of rows:";
	cin>>r;
	cout<<"Enter no:of columns:";
	cin>>c;
	cout<<"Enter Elements\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	clrscr();
	cout<<"Array\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			cout<<a[j][i]<<"\t";
		cout<<"\n";
	}
	getch();
}