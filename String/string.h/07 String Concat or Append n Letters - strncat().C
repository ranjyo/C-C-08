#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char FName[20] = "";
    char SName[20] = "";

    printf("\n Enter Your First Name = ");
    gets(FName);

    printf("\n Enter Your Surname = ");
    gets(SName);

    getch();

    strncat(FName, SName,5);
    /// It will Appends / Concat FName string with SName String
    /// & After Concat We Will get Result in FName String
    /// as both strings Addition.

    printf("\n Fname after string concat = %s",FName);

    printf("\n Sname after string concat = %s",SName);

    getch();
    return 0;
}
