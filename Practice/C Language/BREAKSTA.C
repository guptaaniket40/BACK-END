#include<stdio.h>
#include<conio.h>
void main()
{
     int i;
     clrscr();
     for(i=0;i<10;i++)
     {
	  if(i==5)
	{
	     break;
	  }
	  else{
		printf("%d\n",i);
	    }
	 }
	 getch();
   }