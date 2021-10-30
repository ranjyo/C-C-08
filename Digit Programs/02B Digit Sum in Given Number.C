// Sum of Digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dSum = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 8437

    Temp = No;

    while(Temp > 0)
    {
        dSum = dSum + (Temp % 10);

        Temp = Temp / 10;
    }

    printf("\n Sum of Digits in %d is = %d",No, dSum);

    getch();
    return 0;
}
