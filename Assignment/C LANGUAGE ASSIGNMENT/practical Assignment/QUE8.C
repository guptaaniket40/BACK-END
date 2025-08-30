#include<stdio.h>
#include<conio.h>
void main()
{
     clrscr();

     int arr1d[5];
     int arr2d[3][3];
     int i,j,sum=0;

     printf("\n enter 5 integers:\n");
     for(i=0;i<5;i++)
     {
	  scanf("%d",&arr1d[i]);
       }

       printf("\n enter(1d array):\n");
       for(i=0;i<5;i++)
       {
	   printf("%d",arr1d[i]);
       }

       printf("\n enter elements of3x3 matric:\n");
       for(i=0;i<3;i++)
       {
	  for(j=0;j<3;j++)
	  {
	      scanf("%d",&arr2d[i][j]);
	      }
	    }

	    printf("\n the 3x3 matrix is:\n");
	    for(i=0;i<3;i++)
	    {
	       for(j=0;j<3;j++)
	       {
		  printf("%d",arr2d[i][j]);
		  sum=sum+arr2d[i][j];
		 }
		  printf("\n");
	       }
	       printf("\nsumof all elements in matrix=%d",sum);

	       getch();
	   }

