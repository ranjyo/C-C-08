// Program to Print Sum of 10 inputted numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0;

    printf("\n Enter 10 Integer Numbers to Calculate there Sum => \n");

    while(Cnt < 10)
    {
        printf("\n Enter Number %d = ", Cnt+1);
        scanf("%d",&No);

        Sum = Sum + No;
        Cnt++;
    }

    printf("\n Sum of Given 10 Numbers is = %d.", Sum);

    getch();
    return 0;
}
