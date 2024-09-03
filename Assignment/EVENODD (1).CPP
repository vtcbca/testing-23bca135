#include<iostream.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    cout<<"enter a values = ";
    cin>>a;
    if(a==0)
    {
	cout<<"it naither even nor odd";

    }
     else if(a%2==0)
    {
	cout<<"the number is even";

    }
    else
    {
	cout<<"the number is odd";

    }
    getch();

}