// User Specified Digits Count in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    char Dig = 0;
    int No = 0, dCount = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);

    printf("\n Enter Digit To be Counted in Given Number = ");
    Dig = getche();

    Temp = No;

    while(Temp > 0)
    {
        if( (Temp % 10) == (Dig - 48))
        {
            dCount++;
        }

        Temp = Temp / 10;
    }

    printf("\n Count of %d Digit in %d Number is = %d",(Dig - 48), No, dCount);

    getch();
    return 0;
}
