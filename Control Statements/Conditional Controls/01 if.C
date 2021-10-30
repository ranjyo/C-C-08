#include<stdio.h>
#include<conio.h>

int main()
{
    float Budget = 0.0;

    printf("\n Enter Your Budget = ");
    scanf("%f", &Budget);

    if( Budget > 0 )   // TRUE  or  FALSE
    {
        printf("\a\n Welcome To Showroom!!!");
        getch();
    }

    printf("\n Thanks for Visiting");

    getch();
    return 0;
}
