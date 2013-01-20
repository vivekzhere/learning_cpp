#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,l,n,m;
	cout<<"Enter no of lines(odd) : ";
	cin>>m;
	for(i=0,n=m/2+1;i<n;i++)
	{
		for(j=0,l=0;j<(n+i);j++)
		{
			if(j<(n-(i+1)))
				cout<<"  ";
			else
			{
				if(j<n)
					l++;
				else
					l--;
				cout<<(char)(l+64)<<" ";
			}
		}
		cout<<"\n";
	}
	for(i=1,k=(2*n)-1,n--;i<=n;i++)
	{
		for(j=0,l=0;j<(k-i);j++)
		{
			if(j<i)
				cout<<"  ";
			else
			{
				if(j<=n)
					l++;
				else
					l--;
				cout<<(char)(l+64)<<" ";
			}
		}
		cout<<"\n";
	}
	getch();
}
