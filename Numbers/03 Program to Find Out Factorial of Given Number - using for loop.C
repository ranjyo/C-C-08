// Factorial of given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, Fact = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    for(Temp = No, Fact = 1; Temp > 0 ; Fact *= Temp, Temp--);

    printf("\n Factorial of %d is = %d.",No, Fact);

    getch();
    return 0;
}
