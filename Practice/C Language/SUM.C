#include<stdio.h>
#include<conio.h>
void main()
{
      int n,sum=0;
      clrscr();
      printf("\n Enter N:");
      scanf("%d",&n);
      do
      {
	 sum=sum+n;
	 n--;
       }
	 while(n>0);
	 printf("\n sum:%d",sum);
	 getch();
    }