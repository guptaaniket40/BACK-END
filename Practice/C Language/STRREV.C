#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[50],s2[30];
	clrscr();
	printf("\nEnter S1:");
	gets(s1);
	strrev(s1);
	printf("%s",s1);
	strcpy(s2,s1);
	printf("\n:%s",s2);
getch();
}