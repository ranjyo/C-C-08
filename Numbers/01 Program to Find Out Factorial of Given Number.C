// Factorial of given number

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Fact = 1;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    while(No > 0)
    {
        Fact = Fact * No;
        No--;
    }

    printf("\n Factorial of %d is = %d.",No, Fact);

    getch();
    return 0;
}
