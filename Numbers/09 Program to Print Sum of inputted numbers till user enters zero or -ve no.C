/// Program to make sum of Bills till user enters zero/-ve Amount
#include<stdio.h>
#include<conio.h>

int main()
{
    int Bill = 0, Sum = 0, Cnt = 1;

    printf("\n Enter Bills to Calculate there Total => ");
    printf("\n Note: When You Enter -ve or Zero Amount we'll Stop Calculation \n");

    while(1)  /// OR while(true) Unconditional While Loop -
    {
        printf("\n Enter Bill Amount %d = ", Cnt);
        scanf("%d",&Bill);

        if(Bill <= 0)
        {
            break;
        }

        Sum = Sum + Bill;
        Cnt++;
    }

    printf("\n Total of Given Bills is = %d.", Sum);

    getch();
    return 0;
}
