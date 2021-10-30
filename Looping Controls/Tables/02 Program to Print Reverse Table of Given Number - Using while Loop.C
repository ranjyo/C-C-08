#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 10, No = 0;

    printf("\n Enter a Number To Print its Reverse Table = ");
    scanf("%d",&No);

    printf("\n Reverse Table Of %d is \n ", No);

    while(Cnt >= 1)
    {
        printf("\n %d * %3d = %d", No, Cnt, (No * Cnt));

        Cnt--;
    }

    getch();
    return 0;
}
