#include<stdio.h>
#include<conio.h>
void printline()
{
	    int i;
	    clrscr();
	    for(i=0;i<20;i++)
	    {
		printf("*");
	     }
	 }
       void add(int a,int b)
       {
	   printf("\nAddition : %d",a+b);
       printf("\n");
      }
   void main()
   {
       int x,y;
       clrscr();
       printf("\nEnter value x :");
       scanf("%d",&x);
       printf("\nEnter value y :");
       scanf("%d",&y);
       add(x,y);
       printf
     // printline();
   getch();
   }


