/// Sum of 10 Inputted Numbers

#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 1, No = 0, Sum = 0;

    printf("\n Enter 5 Integer Numbers for Addition => \n ");

    while(Cnt <= 10)
    {
        printf("\n Enter a Number %d = ", Cnt);
        scanf("%d",&No);

        Sum = Sum + No;

        Cnt++;
    }

    printf("\n Summation of given Numbers = %d. ", Sum);

    getch();
    return 0;
}
