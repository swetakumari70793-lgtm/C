//Write a C program to convert specified days into years, weeks and days.
//Note: Ignore leap year.

#include<stdio.h>
int main()
{
    int days , years , weeks ;
    
    // Days = 1329;

    printf("\n");
    printf("Enter a number of days : ");
    scanf("%d",&days);
    years = days/365;
    weeks = (days % 365)/7;
    days = days - ((years * 365) + (weeks * 7));
    printf("Years : %d\n",years);
    printf("Weeks : %d\n",weeks);
    printf("Days  : %d\n",days);
    printf("\n");

    return 0;
}