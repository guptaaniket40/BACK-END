#include<stdio.h>
#include<conio.h>
void main()
{
    clrscr();
    int i;
    printf("\n print num 1 to 10 using forloop\n");
    for(i=1;i<=10;i++)
    {
	printf("%d\n",i);

     }

     printf("\n print num 1 to 10 using while loop\n");
	i=1;
	while (i<=10)
	{
	    printf("%d\n",i);
	    i++;
	 }


	 printf("\n print num 1to 10 using do while\n");
	    i=1;

	    do
	    {
		printf("%d\n",i);
		i++;
	    }
	    while(i<=10);

	    getch();
    }
