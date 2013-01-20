#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,k,n;
	cout<<"Enter limit:";
	cin>>k;
	n=(2*k)-1;
	for(i=0;i<k;i++,n--)
	{
		for(j=0;j<n;j++)
		{
				if(j<i)
					cout<<"  ";
				else
					cout<<"* ";
		}
      cout<<"\n";
	}
	getch();
}