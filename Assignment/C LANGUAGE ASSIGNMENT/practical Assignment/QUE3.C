#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();
     int a,b;

     printf("Enter two integer value:");
     scanf("%d",&a,&b);

     printf("Airthmetic operators\n");
     printf("a+b= %d\n",a+b);
     printf("a-b=%d\n",a-b);
     printf("a*b= %d\n",a*b);

     if(b!=0)
     {
	printf("a/b=division by zero is not possible\n");

     }

     //relational opreators
     printf("Relational opreators\n");
     printf("a==b; %d\n",a==b);
     printf("a!=b; %d\n",a!=b);
     printf("a>b: %d\n", a>b);
     printf("a<b: %d\n", a<b);
     printf("a>=b: %d\n",a>=b);
     printf("a<=b: %d\n",a<=b);

     //logical operators
     printf("logical opreators\n");
     printf("(a&&b):%d\n",(a&&b));
     printf("(a||b):%d\n",(a||b));
     printf("!(a) : %d\n", !a);
     printf("!(b) : %d\n", !b);

     getch();
  }



