#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, X = 0;

    printf("\n Enter Row Size & Column Size = ");
    scanf("%d",&X);

    printf("\n\n Pattern is => \n\n");

    for( i = 1; i <= X; i++)
    {
        for( j = 1; j <= X; j++)
        {
            if(  i == 1 || i == X || j == 1 || ((i == (X/2) + 1) && ( i >= j )) )
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}
