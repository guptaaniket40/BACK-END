#include<iostream.h>
#include<conio.h>
void main()
{
   int marks;
   clrscr();
   cout<<"\nEnter marks:";
   cin>>marks;

   if(marks>=90)
   {
   cout<<"\nExcellent";
   }
   else if(marks>=70)
   {
   cout<<"\nGood";
   }
   else if(marks>=50)
   {
   cout<<"\nAverage";
   }
   else
   {
   cout<<"\nFail";
   }
   getch();

 }
