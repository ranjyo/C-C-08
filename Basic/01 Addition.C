#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 0, N2 = 0, Sum = 0;

    printf("\n Enter 2 Numbers for Addition = ");
    scanf("%d%d",&N1,&N2);

    Sum = N1 + N2;

    printf("\n\n Addition of %d and %d is = %d.", N1, N2, Sum);

    getch();
    return 0;
}
