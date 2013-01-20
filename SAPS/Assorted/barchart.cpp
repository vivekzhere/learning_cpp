#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],m,i,j;
	cout<<"Enter no: of values:";
	cin>>m;
	for(i=0;i<m;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		for(j=i+1;j<m;j++)
			if(a[i]>a[j])
			{
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
	if(a[0]<-10||a[m-1]>10)
		cout<<"Invalid values";
	else
	{
		clrscr();
      cout<<"\t\tBar Chart";
		for(i=0;i<m;i++)
		{
			cout<<"\n"<<a[i]<<"\t|";
			for(j=-10;j<0;j++)
				if(j>=a[i])
					cout<<"*";
				else
					cout<<" ";
			cout<<"|";
			for(j=1;j<11;j++)
				if(j<=a[i])
					cout<<"*";
				else
					cout<<" ";
			cout<<"|";
		}
	}
	getch();
}
