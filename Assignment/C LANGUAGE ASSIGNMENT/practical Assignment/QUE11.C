
#include<stdio.h>
#include<conio.h>

struct student
{
    char name[30];
    int roll;
    float marks;
   };

  void main()
  {
     clrscr();
     struct student s[3];
     int i;

     for(i=0;i<3;i++)
     {
	  printf(" enter detils of student %d:\n",i+1);

	  printf("name:");
	  scanf("%s",s[i].name);
	  fflush(stdin);

	  printf("roll number:");
	  scanf("%d",&s[i].roll);
	  fflush(stdin);

	  printf("marks:");
	  scanf("%f",&s[i].marks);
	  fflush(stdin);
     }

     printf("\n student details \n");
     for(i=0;i<3;i++)
     {
	 printf("\n student %d\n",i+1);
	 printf("name: %s\n",s[i].roll);
	 printf("marks: %.2f\n",s[i].marks);
   }
   getch();
 }