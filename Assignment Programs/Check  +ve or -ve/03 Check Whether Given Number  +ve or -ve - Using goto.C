// Program Check Whether Given Number +ve or -ve

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
            printf("\n Given Number %d is Neutral.\n", No);
            goto UP;
        }

        if( No > 0 )
        {
            printf("\n %d is Positive Number.\n",No);  // 45   +75  +45  96
        }
        else
        {
            printf("\n %d is Negative Number.\n",No);  // -98  -25  -12  -64
        }

        printf("\n\n Thanks for Visiting");
        printf("\n Visit Again Later");

        getch();
        return 0;
}
