// Count Number of Digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dCnt = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 8437

    while(No > 0)
    {
        No = No / 10;

        dCnt++;
    }

    printf("\n Digits in Given Number are = %d",dCnt);

    getch();
    return 0;
}
