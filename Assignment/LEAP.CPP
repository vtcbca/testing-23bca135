#include<iostream.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	cout<<"enter year";
	cin>>year;
	cout<<"year= "<<year<<endl;
	if(year%4==0)
	{
		cout<<" year is leap";

	}
	else
	{

			cout<<" year is not  leap";
	}
	getch();
}