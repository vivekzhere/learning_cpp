#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	fstream fs,fs2;
	char ch;
	fs.open("*.txt",ios::out);
	cout<<"Enter the paragraph :\n";
	cin>>ch;
	while(ch!=13)
	{
		fs<<ch;
      ch=getchar();
	}
	getch();
	fs.close();
	fs2.close();
	fs.open("Poem2.txt",ios::in);
	clrscr();
	cout<<"The paragraph :\n";
	while(!fs.eof())
	{
		fs.get(ch);
		cout<<ch;
	}
	fs.close();
	getch();
}
