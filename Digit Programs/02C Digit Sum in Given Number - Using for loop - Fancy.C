// Sum of Digits in given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, dSum = 0, Temp = 0;

    printf("\n Enter a Positive Number = ");
    scanf("%d",&No);  // 8437

    for(dSum = 0, Temp = No ; Temp > 0 ; dSum += (Temp % 10), Temp /= 10 );

    printf("\n Sum of Digits in %d is = %d",No, dSum);

    getch();
    return 0;
}
