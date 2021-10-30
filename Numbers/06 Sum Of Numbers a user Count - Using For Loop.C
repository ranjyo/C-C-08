// Program to Print Sum given numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0, Num = 0;

    printf("\n Enter How Many Numbers You Have = ");
    scanf("%d",&Num);

    for(Cnt = 1; Cnt <= Num; Cnt++)
    {
        printf("\n Enter Number %d = ", Cnt);
        scanf("%d",&No);

        Sum = Sum + No;
    }

    printf("\n Sum of Given 5 Numbers is = %d.", Sum);

    getch();
    return 0;
}
