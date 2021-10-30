// Program to Print Sum of 5 inputted numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0;

    printf("\n Enter 5 Integer Numbers to Calculate there Sum => \n");

    for(Cnt = 1; Cnt <= 5; Cnt++)
    {
        printf("\n Enter Number %d = ", Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n Sum of Given 5 Numbers is = %d.", Sum);

    getch();
    return 0;
}
