#include<stdio.h>
#include<conio.h>

int main()
{
            float Budget = 0;

            printf("\n Enter Budget = ");
            scanf("%f",&Budget);   // 9000

            if( Budget > 10000 )
            {
                if( Budget > 20000 )
                {
                    if( Budget > 50000 )
                    {
                        printf("\n A++");
                    }
                    else
                    {
                        printf("\n A");
                    }
                }
                else
                {
                    if( Budget > 15000 )
                    {
                        printf("\n B");
                    }
                    else
                    {
                        printf("\n C");
                    }
                }
            }
            else if( Budget > 5000)
            {
                if(Budget > 7500)
                {
                    printf("\n D");
                }
                else
                {
                    printf("\n E");
                }
            }
            else
            {
                printf("\n F");
            }

            getch();

            printf("\n Thanks for Using Our Service");

            getch();
            return 0;
}
