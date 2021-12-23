#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char MyName[20] = "ABC";
    char CopyName[20] = "PQR";

    printf("\n BEFORE strcpy() => \n");

    printf("\n MyName Before String Copy = %s",MyName);
    printf("\n CopyName Before String Copy = %s",CopyName);

    printf("\n\n Enter Your Name = ");
    gets(MyName);

    strncpy(CopyName, MyName,7);

    printf("\n AFTER strcpy() => \n");

    printf("\n MyName After String Copy = %s",MyName);
    printf("\n CopyName After String Copy = %s",CopyName);

    getch();
    return 0;
}
