#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{

	int py,math,cpp,mil,cs;
	float per;
	printf("enter five subject mark ");
	scanf("%d%d%d%d%d",&py,&math,&cpp,&mil,&cs);
	per=(py+math+cpp+mil+cs)/500 *100;
	printf("percebtage=%f",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80)
	{

		printf("grade B");

	}
	else if(per>=70)
	{

		printf("grade C");

	}
	else if(per>=60)
	{

		printf("grade D");

	}
	else if(per>=50)
	{

		printf("grade E");

	}

	else if(per>=40)
	{

		  printf("grade F");
	}

	else
	{
		printf("fail" );
	}
	getch();
}