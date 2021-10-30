// Check Whether Given Character is Upper Case or Lower Case
#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character = ");
    ch = getche();

    if( ch >= 'A' && ch <= 'Z' )
    {
        printf("\n %c is UPPER CASE Alphabet.", ch);
    }
    else if( ch >= 'a' && ch <= 'z' )
    {
        printf("\n %c is LOWER CASE Alphabet.", ch);
    }
    else
    {
        printf("\n Given Letter %c is not an Alphabet.",ch);
    }

    getch();
    return 0;
}
