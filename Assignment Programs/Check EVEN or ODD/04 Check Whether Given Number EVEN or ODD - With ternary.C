#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    UP:
    printf("\n Enter an Integer Number = ");
    scanf("%d", &No);

    if( No == 0)
    {
        printf("\n %d is Neutral", No);
        goto UP;
    }

    ( No % 2 == 0 ) ? printf("\n %d is EVEN",No) : printf("\n %d is ODD",No);

    printf("\n\n Thanks for Visiting");
    printf("\n Visit Again Later");

    getch();
    return 0;
}
