#include<stdio.h>
#include<conio.h>
void main()
{
      clrscr();
      int num,month;
      printf("\n Enter month");
      scanf("%d",&num);

      if(num %2==0)
      {
	 printf("\n Even");
       }
       else
       {
	  printf("\n odd");

	}

	printf("\n Enter a month (1-12)	:");
	scanf("%d\n",&month);

	switch(month){
	{
	   case 1:  printf("january") ;
		    break;
	}

	   {
	   case 2: printf(" Ferbuary");
		   break;
	    }

	    {
	    case 3: printf("march");
		    break;
	    }

	    {
	    case 4: printf("Apirl");
		    break;
	    }

	    {
	    case 5 : printf("May");
		     break;
	    }

	    {
	    case 6: printf("June");
		    break;
	    }

	    {
	    case 7:printf("July");
		   break;
	     }

	     {
	     case 8:printf("August");
		    break;
	      }

	      {
	      case 9:printf("September");
		     break;
	       }

	       {
	       case 10: printf("0Ctober");
			break;
	       }

	       {
	       case 11: printf("November");
			break;
	       }

	       {
	       case 12: printf("December");
			break;
		}

		{
		    deafault :	printf("Invalid month number");
		 }
	      }

	    getch();
	}


