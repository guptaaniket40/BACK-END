#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	clrscr();
	printf("\n Enter Array Element\n");
	for(i=0;i<5;i++)
	{
	     printf("Enter %d elememt",i);
	     scanf("%d",&a[i]);
	 }
	   printf("\nArray Elements are\n");
	   for(i=0;i<5;i++)
	  {
		 printf("\n A[%d] :%d",i,a[i]);
	   }
	  //Swapping
	   for(i=0;i<5;i++)
	      {

		  for(j=i+1;j<5;j++)
		 {
		      if(a[i]>a[j])
		      {
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;
		     }
		}
	  }

	     printf("\n Array element are in ascending order\n");
	     for(i=0;i<5;i++)
	     {
		  printf("\nA[%d] : %d",i,a[i]);
	      }
	 for(i=0;i<5;i++)
	      {

		  for(j=i+1;j<5;j++)
		 {
		      if(a[i]<a[j])
		      {
			  temp=a[i];
			  a[i]=a[j];
			  a[j]=temp;
		     }
		}
	  }

	     printf("\n Array element are in descending order\n");
	     for(i=0;i<5;i++)
	     {
		  printf("\nA[%d] : %d",i,a[i]);
	      }


	      getch();
     }

