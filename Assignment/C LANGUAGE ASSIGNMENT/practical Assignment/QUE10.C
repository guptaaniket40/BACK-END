#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    clrscr();
    char str1[50],str2[50];

    printf("\n enter first string:");
    gets(str1);

    printf("\n enter second string:");
    gets(str2);

    strcat(str1,str2);
    printf("\n concatenated string=%s",str1);
    printf("\nlength of cancateneted string=%d",strlen(str1));

    getch();
 }


