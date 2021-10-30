#include<stdio.h>
#include<conio.h>

int main()
{
    int Cnt = 0, No = 0;

    printf("\n Enter a Number To Print its Table = ");
    scanf("%d",&No);

    printf("\n Table Of %d is \n ", No);

    for(Cnt = 1; Cnt <= 10; Cnt++)
    {
        printf("\n %d * %d = %d", No, Cnt, (No * Cnt));
    }

    getch();
    return 0;
}
