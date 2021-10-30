// Even Digits Count in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Dig = 0, Even_Count = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 294038

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if((Dig != 0) && (Dig % 2 == 0) )
        {
            Even_Count++;
        }

        Temp = Temp / 10;
    }

    printf("\n Even Digits in %d are = %d",No, Even_Count);

    getch();
    return 0;
}
