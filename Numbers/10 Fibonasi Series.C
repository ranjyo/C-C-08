/// Fibonacci Series
#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 1, N3 = 0, Cnt = 0;

    printf("\n Enter Count for Fibonacci Series = ");
    scanf("%d",&Cnt);

    printf("\n Fibonacci Series is => \n\n\t");

    printf("%d\t%d", N1, N2);

    while(Cnt > 0)
    {
        N3 = N1 + N2;

        printf("\t%d", N3);

        N1 = N2;
        N2 = N3;

        Cnt--;
    }

    getch();
    return 0;
}
