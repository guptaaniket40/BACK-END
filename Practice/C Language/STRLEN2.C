#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
      char s1[50];
      int i ;
      clrscr();
      printf("\nEnter a string:");
      gets(s1);
      for(i=0;s1[i]!='\0';i++)
      {
	  i++;
      }
      printf("length of string : %d",i);
      getch();
   }

