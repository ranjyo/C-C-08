#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
            char Name1[20] = "";
            char Name2[20] = "";

            int Cnt = 0;

            printf("\n Enter Your String 1 = ");
            gets(Name1);

            printf("\n Enter Your String 2 = ");
            gets(Name2);

            Cnt = strcmp(Name1, Name2);

            if(Cnt == 0)
            {
                printf("\n Both Strings Equal.");
            }
            else if(Cnt > 0)
            {
                printf("\n 1st String is Alphabetically Greater than 2nd String.");
            }
            else
            {
                printf("\n 1st String is Alphabetically Less than 2nd String.");
            }

            getch();
            return 0;
}
