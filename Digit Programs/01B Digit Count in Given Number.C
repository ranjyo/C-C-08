// Count Number of Digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dCnt = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 8437

    Temp = No;

    while(Temp > 0)
    {
        Temp = Temp / 10;

        dCnt++;
    }

    printf("\n Digits in %d are = %d",No, dCnt);

    getch();
    return 0;
}
