#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	  char string[50];
	  int i;
	  clrscr();
	  printf("\n Enter a string:");
	  gets(string);
	  i= strlen(string);
	  printf("%d",i);
	  getch();
}



