// Accept & Display Student Details

#include<stdio.h>
#include<conio.h>

int main()
{
        int Roll_No = 0;
        char Name[80] = "";
        float Per = 0.0;
        char Course[40] = "";

        printf("\n Accepting Student Details = ");

        printf("\n\n Enter Student Roll Number = ");
        scanf("%d",&Roll_No);

        printf("\n Enter Student Name = ");
        gets(Name);

        printf("\n Enter Student Percentage = ");
        scanf("%f",&Per);

        printf("\n Enter Student Course Name = ");
        gets(Course);

        getch();
        return 0;
}
