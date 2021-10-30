// Zero Digits Count in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Zero_Count = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 294038

    Temp = No;

    while(Temp > 0)
    {
        if( (Temp % 10) == 0)
        {
            Zero_Count++;
        }

        Temp = Temp / 10;
    }

    printf("\n Zero Digits in %d are = %d",No, Zero_Count);

    getch();
    return 0;
}
