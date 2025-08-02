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
       int sub(int a,int b)
       {
	     return a-b;
      }
	int mul(int a,int b)
	{
	      return a*b;

	 }
		int div(int a,int b)
	{
	      return a/b;

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
       printf("\nsubtraction : %d",sub(x,y));
       printf("\n");
       printf("\nmultiplication : %d",mul(x,y));
       printf("\n");
       printf("\nDivision : %d",div(x,y));
       printf("\n");

    // printline();
   getch();
   }


