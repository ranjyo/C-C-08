#include<stdio.h>
#include<conio.h>

int main()
{
        int No1 = 0, No2 = 0;

        printf("\n Enter 2 Numbers = ");
        scanf("%d%d", &No1, &No2);

        if(No1 == No2)
        {
            printf("\n Both Given Numbers are EQUAL.");
        }
        else if(No1 > No2)
        {
            printf("\n 1st Num => %d is Greater than 2nd Num => %d.",No1, No2);
        }
        else
        {
            printf("\n 2nd Num => %d is Greater than 1st Num => %d.",No2, No1);
        }

        printf("\n\n Thanks for Visiting");
        printf("\n Visit Again Later");

        getch();
        return 0;
}
