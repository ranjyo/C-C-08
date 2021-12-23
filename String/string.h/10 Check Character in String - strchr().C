#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
            char Name[20] = "";
            char ch = '\0';

            char *cPtr = NULL;

            printf("\n Enter Your Name = ");
            gets(Name);

            printf("\n Enter a Character To be Checked in String = ");
            ch = getche();

            cPtr = strchr(Name, ch);

            if(cPtr == NULL)
            {
                printf("\n Charcter Didn't Found in String.");
            }
            else
            {
                printf("\n Given Chracter Present in String.");
            }

            getch();
            return 0;
}
