#include<stdio.h>
#include<conio.h>
#include<Math.h>
void main()
{

    int n,fact=1,i;
    clrscr();
    printf("\n Enter any number:");
   scanf("%d\n",&n);
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
    }
    printf("Factorial of a anumber :%d",fact);
    getch();
   }

