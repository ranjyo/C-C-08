#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n\n Enter an Integer Number = ");
    scanf("%d", &No);

    if( (No % 5 == 0) && (No % 7 == 0) )
    {
        printf("\n %d is Divisible by Both 5 & 7.", No);
    }
    else if( No % 5 == 0 )
    {
        printf("\n %d is Only Divisible by 5 not by 7. ",No);
    }
    else if( No % 7 == 0 )
    {
        printf("\n %d is Only Divisible by 7 not by 5. ",No);
    }
    else
    {
        printf("\n %d is Not Divisible by Both 5 & 7. ",No);
    }

    printf("\n\n Thanks for Visiting");
    printf("\n Visit Again Later");

    getch();
    return 0;
}
