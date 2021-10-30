// Program Check Whether Given Number +ve or -ve

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter an Integer Number = ");
    scanf("%d", &No);

    ( No == 0) ? (printf("\n %d is Neutral.", No)) : (( No > 0 ) ? printf("\n %d is +ve.",No) : printf("\n %d is -ve.",No));

    printf("\n\n Thanks for Visiting");
    printf("\n Visit Again Later");

    getch();
    return 0;
}
