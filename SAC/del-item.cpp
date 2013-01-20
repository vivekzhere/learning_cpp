//To delete a value in an array.
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long i,n[5],a;
	cout<<"Enter 5 numbers\n";
	for(i=0;i<5;i++)
		cin>>n[i];
	cout<<"Enter a number:";
	cin>>a;
	for(i=0;i<5;i++)
		if(n[i]==a)
		{
			while(i<5)
			{
				n[i]=n[i+1];
				i++;
			}
			
		}

	cout<<"\nNew Array";
	for(i=0;i<4;i++)
		cout<<"\n"<<n[i];
	getch();
}