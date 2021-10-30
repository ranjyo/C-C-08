////////////////////////////////////////////////////////////////
/// Print Your Name 5 Times
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
        int Cnt = 100;

        printf("\n\n\t Printing Name 5 Times => ");

        do
        {
            printf("\n INDIA");
            Cnt++;
        }while( Cnt <= 5 );

        printf("\n\n Press A Key To Close...");

        getch();
        return 0;
}
