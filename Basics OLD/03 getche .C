#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '$';

    printf("\n Value of character = %c.\n\n",ch);


    printf("\n Enter New Character Value for getch() : ");
    ch = getch();// M => Doesn't Displayed

    printf("\n\n New Value of Character = %c.\n",ch);   // M


    printf("\n Enter New Character Value for getche() : ");
    ch = getche();// G

    printf("\n\n New Value of Character = %c.\n",ch);   // G


    printf("\n Enter New Character Value for getchar() : ");
    ch = getchar();// Karad City

    printf("\n\n New Value of Character = %c.\n",ch);   // K


    printf("\n\n Thanks for Using Our App.\n Press a Key To Exit.");

    getch();
    return 0;
}
