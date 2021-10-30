#include<stdio.h>
#include<conio.h>

int main()
{
        char ch = '\0';
        int No = 55;

        printf("\n Size for Integer No is = %d",sizeof(No));
        printf("\n Size for  NUm 1 is = %d",sizeof(1));
        printf("\n Size for  No2 is = %d",sizeof(35.775f));
        printf("\n Size for Char Var is = %d",sizeof('p'));

        printf("\n Size for Character variable ch is = %d",sizeof(ch));

        printf("\n Size for float data type is = %d",sizeof(float));

        printf("\n Size for double Data type is = %d",sizeof(double));

        _getch();
        return 0;
}
