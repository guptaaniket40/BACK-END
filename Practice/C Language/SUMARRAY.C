#include<stdio.h>
#include<conio.h>
void main()
{
      int a[10],i,sum=0;
      clrscr();
      printf("\n Enter array element\n");
      for (i=0;i<10;i++)
      {
	  printf(" Enter %d element :",i);
	  scanf("%d",&a[i]);
	  sum=sum+a[i];
      }
	printf("\n sum : %d",sum);
	printf("\n Array element are\n");
	for(i=0;i<10;i++)
	{
	       printf("\n A[%d]= %d",i,a[i]);
	}
	  getch();
  }
