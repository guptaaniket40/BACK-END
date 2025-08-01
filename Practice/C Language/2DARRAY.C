#include<stdio.h>
#include<conio.h>
void main()


{
      int a[3][3],b[3][3],c[3][3],i,j;
      clrscr();
      printf("\nEnter 2D Array A\n");
      for(i=0;i<3;i++)
      {
	  for(j=0;j<3;j++)
	  {
	      printf("Enter %d row & %d coloum :",i,j);
	      scanf("%d",&a[i][j]);
   }
 }

    printf("\nEnter 2D Array B\n");
    for(i=0;i<3;i++)
    {
	for(j=0;j<3;j++)
	{
	      printf("Enter %d row & %d coloumn:",i,j);
	      scanf("%d",&b[i][j]);
	      }
	  }
	  printf("\n 2DArray B\n");
	  for(i=0;i<3;i++)
	  {
	       for(j=0;j<3;j++)
	       {
		    printf("\t%d",b[i][j]);
		}
		  printf("\n");
	    }
	   for(i=0;i<3;i++)
	       {
		      for(j=0;j<3;j++)
		      {
			  c[i][j]=a[i][j]+b[i][j];
		     }
	   }
		 printf("\n 2DArray c\n");
		 for(i=0;i<3;i++)
	       {
	       for(j=0;j<3;j++)
	       {
		    printf("\t%d",c[i][j]);
		}
		  printf("\n");
	    }
	     for(i=0;i<3;i++)
	       {
		      for(j=0;j<3;j++)
		      {
			  c[i][j]=a[i][j]+b[i][j];
		     }
		 }

	    getch();

}

