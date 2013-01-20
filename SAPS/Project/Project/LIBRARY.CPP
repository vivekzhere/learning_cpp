#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<dos.h>
#include<process.h>
#include "e:\vivek\works\c++\saps\project\project\book.cpp"
#include "e:\vivek\works\c++\saps\project\project\login.cpp"
extern int kbook,kmbr,f;
extern fstream fs;
extern char ch[6];
extern book bk;
extern member mbr;
char usr_stat;
void menu()
{                  //code for Menu starts here
	int m,m1,m2,loc;
	char me;
	do
	{
		clrscr();
		cout<<"\tMenu\n1.Book\n2.Members\n3.Transactions\n4.Search\n5.Report\n";
		cout<<"6.User Account\n7.Log Out\n8.Exit\nEnter your choice : ";
		cin>>ch;
		f=chknum(ch,m);
		if(f!=0)
			m=9;
		switch(m)
		{
			case 1:
				do
				{
					clrscr();
					cout<<"\tThe Book Menu\n1.Add\n2.Display\n3.Modify\n4.Delete\n";
					cout<<"5.Back\nEnter your choice : ";
					cin>>ch;
					f=chknum(ch,m1);
					if(f!=0)
						m1=6;
					switch(m1)
					{
						case 1:
							if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							if(bk.add()==0)
							{
								fs.open("BookData.dat",ios::app|ios::binary);
								fs.write((char *)&bk,sizeof(bk));
								fs.close();
							}
							break;
						case 2:
							clrscr();
							cout<<"\tDisplay Book\n";
							bk.dis();
							getch();
							break;
						case 3:
							if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							loc=bk.mod();
							if(loc!=-1)
							{
								fs.open("BookData.dat",ios::out|ios::in|ios::binary);
								fs.seekp(loc);
								fs.write((char *)&bk,sizeof(bk));
								fs.close();
							}
							break;
						case 4:
																					if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							delb();
							break;
						case 5:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
							cout<<"1 & 5.\nPress any key to continue..";
							getch();
					}
				}while(m1!=5);
				break;
			case 2:
				do
				{
					clrscr();
					cout<<"\tThe Members Menu\n1.Add\n2.Display\n3.Modify\n";
					cout<<"4.Delete\n5.Back\nEnter your choice : ";
					cin>>ch;
					f=chknum(ch,m1);
					if(f!=0)
						m1=6;
					switch(m1)
					{
						case 1:
																					if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							if(mbr.add()==0)
							{
								fs.open("MbrData.dat",ios::app|ios::binary);
								fs.write((char *)&mbr,sizeof(mbr));
								fs.close();
							}
							break;
						case 2:
							clrscr();
							cout<<"\tDisplay Member\n";
							mbr.dis();
							getch();
							break;
						case 3:
																					if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							loc=mbr.mod();
							if(loc!=-1)
							{
								fs.open("MbrData.dat",ios::in|ios::out|ios::binary);
								fs.seekp(loc);
								fs.write((char *)&mbr,sizeof(mbr));
								fs.close();
							}
							break;
						case 4:
																					if(usr_stat=='U')
							{
								cout<<"\nAccess Denied.\nPress any ket to continue.";
								getch();
								break;
							}
							delm();
							break;
						case 5:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
							cout<<"1 & 5.\nPress any key to continue..";
							getch();
					}
				}while(m1!=5);
				break;
			case 3:
				do
				{
					clrscr();
					cout<<"\tThe Transactions Menu\n1.Issue\n2.Return\n";
					cout<<"3.Back\nEnter your choice : ";
					cin>>ch;
					f=chknum(ch,m1);
					if(f!=0)
						m1=6;
					switch(m1)
					{
						case 1:
							if(issue()==0)
							{
								fs.open("Issue.dat",ios::app|ios::binary);
								fs.write((char *)&is,sizeof(is));
								fs.close();
							}
							break;
						case 2:
							loc=retrn();
							if(loc!=-1)
							{
								fs.open("Issue.dat",ios::in|ios::out|ios::binary);
								fs.seekp(loc);
								fs.write((char *)&is,sizeof(is));
								fs.close();
							}
							break;
						case 3:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
							cout<<"1 & 3.\nPress any key to continue..";
							getch();
						}
					}while(m1!=3);
					break;
			case 4:
				char temp[30];
				do
				{
					clrscr();
					cout<<"\tThe Search Menu\n1.Book\n2.Member\n3.Back\nEnter your choice : ";
					cin>>ch;
					f=chknum(ch,m1);
					if(f!=0)
						m1=6;
					switch(m1)
					{
						case 1:
							do
							{
								clrscr();
								cout<<"\tThe Search Book Menu\n1.\By Name\n2.By Author\n";
								cout<<"3.By Book No.\n4.By Category\n5.Back\nEnter your choice : ";
								cin>>ch;
								f=chknum(ch,m2);
								if(f!=0)
									m2=6;
								switch(m2)
								{
									case 1:
										clrscr();
										cout<<"\tSearch Book By Name\n";
										cout<<"\nEnter the name of the book : ";
										cin>>temp;
										search_b(1,temp);
										getch();
										break;
									case 2:
										clrscr();
										cout<<"\tSearch Book By Author\n";
										cout<<"\nEnter the name of the Author : ";
										cin>>temp;
										search_b(2,temp);
										getch();
										break;
									case 3:
										clrscr();
										cout<<"\tSearch Book By Book No.\n";
										bk.dis();
										getch();
										break;
									case 4:
										clrscr();
										cout<<"\tSearch Book By Category\n";
										cout<<"\nEnter the category of the book : ";
										cin>>temp;
										search_b(3,temp);
										getch();
										break;
									case 5:
										break;
									default:
										cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
										cout<<"1 & 5.\nPress any key to continue..";
										getch();
								}
							}while(m2!=5);
							break;
						case 2:
							do
							{
								clrscr();
								cout<<"\tThe Search Member Menu\n1.\By Name\n2.By Class\n";
								cout<<"3.By Membership No.\n4.Back\nEnter your choice : ";
								cin>>ch;
								f=chknum(ch,m2);
								if(f!=0)
									m2=6;
								switch(m2)
								{
									case 1:
										clrscr();
										cout<<"\tSearch Member By Name\n";
										cout<<"\nEnter the name of the member : ";
										cin>>temp;
										search_m(1,temp);
										getch();
										break;
									case 2:
										clrscr();
										cout<<"\tSearch Member By Class\n";
										cout<<"\nEnter the class of the member : ";
										cin>>temp;
										search_m(2,temp);
										getch();
										break;
									case 3:
										clrscr();
										cout<<"\tSearch Member By Member No.\n";
										mbr.dis();
										getch();
										break;
									case 4:
										break;
									default:
										cout<<"Sorry. Invalid choice.\nPlease enter a number ";
										cout<<"between 1 & 4.\nPress any key to continue..";
										getch();
								}
							}while(m2!=4);
							break;
						case 3:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number ";
							cout<<"between 1 & 3.\nPress any key to continue..";
							getch();
					}
				}while(m1!=3);
				break;
			case 5:
				do
				{
					clrscr();
					cout<<"\tThe Report Menu\n1.Current Stock\n2.Issued Books\n";
					cout<<"3.Book Details\n4.Member Details\n5.Issued Details\n";
					cout<<"6.Today's Issue\n7.Today's Returns\n8.Today's Expected Returns\n";
					cout<<"9.Back\nEnter your choice : ";
					cin>>m1;
					switch(m1)
					{
						case 1:
							disp_b(2);
							getch();
							break;
						case 2:
							disp_b(3);
							getch();
							break;
						case 3:
							disp_b(1);
							getch();
							break;
						case 4:
							disp_m();
							getch();
							break;
						case 5:
							disp_issbks(1);
							getch();
							break;
						case 6:
							disp_issbks(2);
							getch();
							break;
						case 7:
							disp_issbks(3);
							getch();
							break;
						case 8:
							disp_issbks(4);
							getch();
							break;
						case 9:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number ";
							cout<<"between 1 & 9.\nPress any key to continue..";
							getch();
					}
				}while(m1!=9);
				break;
			case 6:
				if(usr_stat=='U'||usr_stat=='A')
				{
					cout<<"\nAccess Denied.\nPress any ket to continue.";
					getch();
					break;
				}
				do
				{
					clrscr();
					cout<<"\tThe User Accounts Menu\n1.Add\n2.Modify\n3.Delete\n";
					cout<<"4.Back\nEnter your choice : ";
					cin>>ch;
					f=chknum(ch,m1);
					if(f!=0)
						m1=5;
					switch(m1)
					{
						case 1:
							if(usr_add()==0)
							{
								fs.open("UserData.dat",ios::app|ios::binary);
								fs.write((char *)&us,sizeof(us));
								fs.close();
							}
							break;
						case 2:
							loc=usr_mod();
							if(loc!=-1)
							{
								fs.open("UserData.dat",ios::out|ios::in|ios::binary);
								fs.seekp(loc);
								fs.write((char *)&us,sizeof(us));
								fs.close();
							}
							break;
						case 3:
							usr_del();
							break;
						case 4:
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
							cout<<"1 & 4.\nPress any key to continue..";
							getch();
					}
				}while(m1!=4);
				break;
			case 7:
                fs.open("Bookno.dat",ios::out|ios::binary);
				fs<<kbook;
				fs.close();
				fs.open("Memberno.dat",ios::out|ios::binary);
				fs<<kmbr;
				fs.close();
				/*clrscr();
				gotoxy(20,10);
				cout<<"Saving your settings  ";
				for(f=0;f<100;f++)
				{
					gotoxy(53,10);
					cout<<f<<" %";
					delay(30);
				}
				clrscr();
				gotoxy(20,10);
				cout<<"Deleting temporary files  ";
				for(f=0;f<100;f++)
				{
					gotoxy(53,10);
					cout<<f<<" %";
					delay(30);
				}
				clrscr();
				gotoxy(20,10);
				cout<<"Loging off  ";
				for(f=0;f<100;f++)
				{
					gotoxy(53,10);
					cout<<f<<" %";
					delay(30);
				}  */
				usr_stat=login();
				break;
			case 8:
				do
				{
					clrscr();
					cout<<"Are you sure you want to exit (Y/N) : ";
					cin>>me;
					switch(me)
					{
						case 'Y':
						case 'y':
							return;
						case 'N':
						case 'n':
							m=2;
							break;
						default:
							cout<<"Sorry. Invalid choice.\nPlease enter 'Y' or 'N'.";
							cout<<"\nPress any key to continue..";
							getch();
							me='A';
					}
				}while(me=='A');
				break;
			default:
				cout<<"Sorry. Invalid choice.\nPlease enter a number between ";
				cout<<"1 & 8.\nPress any key to continue..";
				getch();
		}
		}while(m!=8);
}	 //Code for menu ends
void main()
{
	usr_stat=login();
	/*clrscr();
	gotoxy(20,10);
	cout<<"Loading files  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Setting system environment  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Loging in  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	} */
	fs.open("Bookno.dat",ios::in);
	fs>>kbook;
	fs.close();
	fs.open("Memberno.dat",ios::in);
	fs>>kmbr;
	fs.close();
	menu();
	fs.open("Bookno.dat",ios::out|ios::binary);
	fs<<kbook;
	fs.close();
	fs.open("Memberno.dat",ios::out|ios::binary);
	fs<<kmbr;
	fs.close();
	/*clrscr();
	gotoxy(20,10);
	cout<<"Saving your settings  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Deleting temporary file used   ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}
	clrscr();
	gotoxy(20,10);
	cout<<"Clearing memory area  ";
	for(f=0;f<100;f++)
	{
		gotoxy(53,10);
		cout<<f<<" %";
		delay(30);
	}*/
	_exit(0);
}

