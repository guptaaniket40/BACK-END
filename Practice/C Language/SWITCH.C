#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ans,choice;
    clrscr();
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B;");
    scanf("%d",&b );

    printf("1,Addition");
    printf("\n");

     printf("2,subtraction");
      printf("\n");

       printf("3,multiplication");
    printf("\n");

     printf("4,division");
    printf("\n");

    printf("Enter your choice\n:");
    scanf("%d",&choice);

    switch(choice)
    {
       case 1:  ans=a+b;
		printf("\nAddition : %d",ans);
		break;

       case 2:  ans=a-b;
		printf("\nsubtraction : %d",ans);
		break;

       case 3:  ans=a*b;
		printf("\nmultiplication : %d",ans);
		break;

       case 4:  ans=a/b;
		printf("\n division : %d",ans);

       default: printf("Invalid choice");

    }
       getch();
	}
