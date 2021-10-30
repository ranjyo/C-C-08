////////////////////////////////////////////////////////////////
/// Accept a character from user to get a message
/// a/A => Welcome
/// b/B => Good Bye
/// c/C => Have a Nice Day
/// d/D => Good Day
/// .
/// .
/// default => No Message for you
////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

int main()
{
        char Letter = 0;

        printf("\n Enter an Alphabet = ");
        scanf("%c",&Letter);

        switch(Letter)
        {
            case 'a':
            case 'A':
                    printf("\n Welcome");
                    break;

            case 'b':
            case 'B':
            case 'z':
            case 'Z':
                    printf("\n Good Bye");
                    break;

            case 'c':
            case 'C':
            case 'm':
            case 'M':
            case 'X':
            case 'x':
                    printf("\n Have a Nice Day");
                    break;

            case 'd':
            case 'D':
                    printf("\n Good Day");
                    printf("\n Thanks");
                    break;

            default:
                 printf("\n No Message for you!!!");
                 break;
        }

        getch();

        printf("\n\n Thanks For Input... Press A Key To Close...");

        getch();
        return 0;
}
