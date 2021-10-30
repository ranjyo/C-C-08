#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21, Res = 0;

    Res += No;                              // Res = Res + No;

    printf("\n Result = %d.", Res);         //  21

    Res -= 11;                              // Res = Res - 11;

    printf("\n Result = %d.", Res);         //  10

    Res *= 10;                              //  Res = Res * 10;

    printf("\n Result = %d.", Res);         //  100

    _getch();
    return 0;
}
