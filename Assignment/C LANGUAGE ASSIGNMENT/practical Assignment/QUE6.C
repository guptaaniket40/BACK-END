#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();
     int i;

     printf("\n using break statment\n");
     for(i=1;i<=10;i++)
     {
       if(i==5)
       break;
       printf("%d\n",i);
     }


     //continue statment

     printf("\n Using continue statment\n");
	for(i=1;i<=10;i++)
	{
	   if(i==3)
	   continue;
	   printf("%d\n",i);
	}
	getch();
  }