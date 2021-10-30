// Odd Digits Count in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Odd_Count = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 294038

    Temp = No;

    while(Temp > 0)
    {
        if( (Temp % 10) % 2 == 1 )
        {
            Odd_Count++;
        }

        Temp = Temp / 10;
    }

    printf("\n Odd Digits in %d are = %d",No, Odd_Count);

    getch();
    return 0;
}
