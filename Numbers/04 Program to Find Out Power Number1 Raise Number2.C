// Power N1 ^ N2
#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 0, Temp = 0, Pow = 1;

    printf("\n Enter a Number 1 = ");
    scanf("%d",&N1);

    printf("\n Enter a Number 2 = ");
    scanf("%d",&N2);

    Temp = N2;

    while(Temp > 0)
    {
        Pow = Pow * N1;
        Temp--;
    }

    printf("\n Power of %d Raise to %d = %d.",N1, N2, Pow);

    getch();
    return 0;
}
