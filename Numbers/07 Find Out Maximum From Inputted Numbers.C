// Program to find maximum number from inputted numbers
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Max = 0, Cnt = 0, Num = 0;

    printf("\n Enter How Many Numbers You Have = ");
    scanf("%d",&Num);

    for(Cnt = 1; Cnt <= Num; Cnt++)
    {
        printf("\n Enter Number %d = ", Cnt);
        scanf("%d",&No);

        /// Logic to find out Max

        if(Cnt == 1 || No > Max )
        {
            Max = No;
        }
    }

    printf("\n Maximum From Given Numbers is = %d.", Max);

    getch();
    return 0;
}
