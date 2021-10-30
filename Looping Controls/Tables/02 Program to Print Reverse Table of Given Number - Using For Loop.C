#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0;

    printf("\n Enter a Number To Print its Reverse Table = ");
    scanf("%d",&No);

    printf("\n Reverse Table Of %d is \n ", No);

    for(Cnt = 10; Cnt >= 1; Cnt--)
    {
        printf("\n %d * %3d = %d", No, Cnt, (No * Cnt));
    }

    getch();
    return 0;
}
