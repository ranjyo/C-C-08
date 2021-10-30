/// Swapping of 2 inputed integer numbers without temp variable

#include<stdio.h>
#include<conio.h>

int main()
{
        int No1 = 0, No2 = 0;

        printf("\n Enter 2 Numbers = ");
        scanf("%d%d",&No1,&No2);            // 50  25

        printf("\n Values of Given Numbers Before Swap => ");
        printf("\n No1 = %d, No2 = %d.", No1, No2);

        /// Mathematical Logic for Swapping

        No1 = No1 + No2;            // 50 + 25 = 75
        No2 = No1 - No2;            // 75 - 25 = 50
        No1 = No1 - No2;            // 75 - 50 = 25

        printf("\n Values of Given Numbers After Swap => ");
        printf("\n No1 = %d, No2 = %d.", No1, No2);

        _getch();
        return 0;
}
