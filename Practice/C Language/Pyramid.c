#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, k ;
    for (i = 0; i <= 10; i++)
    {
        for (j = 0; j <= i; j++)
        {
            for (k = 0; k <= j; k++)
            {
                printf(" *");
            }
            printf("\n");
        }
    }
    getch();
    return 0;
}
