//To check whether a matrix is a diagonal matrix.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[25][25],i,j,r,c,t1=0,t2=0;
	cout<<"Enter no:of rows:";
	cin>>r;
	cout<<"Enter no:of columns:";
	cin>>c;
	cout<<"Enter the elements:\n";
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			cin>>a[i][j];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				if(a[i][j]==0)
					t2=0;
				else
					t1=1;
			}
			else
			{
				if(a[i][j]==0)
					t1=1;
				else
					t2=0;
			}
			t2=t2+t1;
		}
	}
	clrscr();
	cout<<"Array\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		cout<<a[i][j]<<"\t";
		cout<<"\n";
	}
	if(t2==r*c)
		cout<<"\nThe matrix is a diagonal matrix";
	else
		cout<<"\nThe matrix is not a diagonal matrix";
	getch();
}