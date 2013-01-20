//To sort five numbers in the ascending order.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long i,n[5],j,t;
	cout<<"Enter 5 numbers\n";
	for(i=0;i<5;i++)
		cin>>n[i];
	cout<<"\nAscending Order\n";
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
			if(n[i]>n[j])
				{
					t=n[i];
					n[i]=n[j];
					n[j]=t;
				}
			cout<<n[i]<<"\n";
	}

	getch();
}