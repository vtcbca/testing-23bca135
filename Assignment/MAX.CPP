#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int n1,n2,n3;
	clrscr();
	printf("enter value n1=");
	scanf("%d",&n1);
	printf("enter value n1=");
	scanf("%d",&n2);
	printf("enter value n1=");
	scanf("%d",&n3);
	if(n1>n2 && n1>n3)
	{
		printf(" %d is a maximum",n1);

	}
       else if(n2>n3)
	{
		printf(" %d is a maximum",n2);

	}
	else
	{
		printf(" %d is maximum",n3);
	}

	getch();
}
