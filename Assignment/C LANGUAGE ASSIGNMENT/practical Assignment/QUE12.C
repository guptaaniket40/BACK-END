#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    FILE *file;
    char filename[]="main.txt";
    char text[]="Hello,How are you?";
    char ch;

    file=fopen(filename,"w");
    if(file==NULL)
    {
       printf("\n Error opening file for writting.");
       getch();
       return;
   }
   fprintf(file,"%s",text);
   fclose(file);
   printf("\nstring written to file sucessfully");

   file=fopen( filename,"r");
   if(file==NULL)
   {
       printf("\n Error opening filefor reading");
       getch();
       return;
   }

   printf("\n contents of the files:");
   while((ch=fgetc(file))!=EOF)
   {
       printf("%c",ch);
    }
    fclose(file);
 }
