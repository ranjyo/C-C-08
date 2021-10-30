#include<stdio.h>
#include<conio.h>

int main()
{
            int Day_Num = 0;

            printf("\n Enter a Day Number(1 - 7) = ");
            scanf("%d",&Day_Num);

            if( Day_Num == 1 )
            {
                printf("\n Monday");
            }
            else if( Day_Num == 2 )
            {
                printf("\n Tuesday");
            }
            else if( Day_Num == 3 )
            {
                printf("\n Wednesday");
            }
            else if( Day_Num == 4 )
            {
                printf("\n Thursday");
            }
            else if( Day_Num == 5 )
            {
                printf("\n Friday");
            }
            else if( Day_Num == 6 )
            {
                printf("\n Saturday");
            }
            else if( Day_Num == 7)
            {
                printf("\n Sunday");
            }
            else            /// Default Block
            {
                printf("\n Invalid Number");
            }

            getch();

            printf("\n Thanks for Using Our Service");

            getch();
            return 0;
}
