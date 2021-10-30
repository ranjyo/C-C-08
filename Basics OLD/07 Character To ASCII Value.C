#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';
        int Val = 0;

        printf("\n Enter a Character To Get Its Corresponding ASCII Value = ");
        ch = getche();

        Val = ch;

        printf("\n\n Character for Given ASCII Value of <%c> is = %d.",ch, Val);  /// 78

        _getch();
        return 0;
}
