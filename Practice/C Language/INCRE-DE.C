#include<stdio.h>
#include<conio.h>
void main()
{
     int a=0,b=0,c=0,d=0,result;
     clrscr();
     result=a++ + ++b + --c + d-- + ++a + --d;
     printf("\na: %d",a);
     printf("\nb: %d",b);
     printf("\nc: %d",c);
     printf("\nd: %d",d);
     printf("\nresult : %d",result);
     getch();
}