#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    UP:
        printf("\n Enter 2 Numbers = ");
        scanf("%d%d", &No1, &No2);

        if(No1 == No2)
        {
            printf("\n Both Given Numbers are EQUAL.\n");
            goto UP;
        }

        if(No1 > No2)
        {
            printf("\n 1st Num => %d is Greater than 2nd Num => %d.\n",No1, No2);
        }
        else
        {
            printf("\n 2nd Num => %d is Greater than 1st Num => %d.\n",No2, No1);
        }

        printf("\n\n Thanks for Visiting");
        printf("\n Visit Again Later");

        getch();
        return 0;
}
