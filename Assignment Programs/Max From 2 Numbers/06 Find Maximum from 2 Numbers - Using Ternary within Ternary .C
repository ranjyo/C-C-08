#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d", &No1, &No2);

    (No1 == No2) ? ( printf("\n EQUAL.") ): ( (No1 > No2) ? printf("\n MAX = %d.",No1) : printf("\n MAX = %d.",No2) );

    printf("\n\n Thanks for Visiting");
    printf("\n Visit Again Later");

    getch();
    return 0;
}
