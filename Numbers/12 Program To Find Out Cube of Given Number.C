//Program To Find Out Cube of Given Number
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cube = 0;

    printf("\n Enter a Number To get Square = ");
    scanf("%d",&No);

    Cube = No * No * No;

    printf("\n Cube of %d is = %d.",No, Cube);

    getch();
    return 0;
}
