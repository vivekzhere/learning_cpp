#include<iostream.h>
#include<conio.h>
#include<process.h>
void main()
{
	clrscr();
	cout<<"Program to print the ASCII code of characters\n=============================================\n";
	int i=1;
	cout<<"The characters are:\n";
	while(i<=256)
	{
		if(i!=26)
			cout<<i<<"  "<<(char)i<<"\t";
		i++;
	}

	getch();
	_exit(0);
}