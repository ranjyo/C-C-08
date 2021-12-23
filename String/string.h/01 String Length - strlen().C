#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = {'H','a','r','r','y','\0'};
    char City[10] = "PUNE";
    char Course[] = "BSC Comp Sci";
    char College[60];

    printf("\n Enter Your College Name = ");
    gets(College);

    getch();

    printf("\n\n Length of Clg Name String = %d.", strlen(College));

    printf("\n\n Length of Name String = %d.", strlen(Name));
    printf("\n\n Length of City String = %d.", strlen(City));
    printf("\n\n Length of Course String = %d.", strlen(Course));

    getch();
    return 0;
}
