#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
        char MyName[20] = "";

        printf("\n\n Enter Your Name = ");
        gets(MyName);

        printf("\n Entered Name Before String Reverse = %s",MyName);

        strrev(MyName);

        printf("\n AFTER strrev() => \n");

        printf("\n Entered Name After String Reverse = %s",MyName);

        getch();
        return 0;
}
