#include<stdio.h>
#include<conio.h>

int main()
{
    float Budget = 0.0;

    printf("\n Enter Your Budget = ");
    scanf("%f", &Budget);

    if( Budget )   // TRUE  or  FALSE
    {
        printf("\a\n Welcome To Showroom!!!");
        getch();
    }
    else
    {
        printf("\n Minimum Budget required is 10000/-");
    }

    printf("\n Thanks for Visiting");
    printf("\n Visit Again Later");

    getch();
    return 0;
}
