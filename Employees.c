/*Write a C program that accepts an employee's ID,
 total worked hours in a month and the amount he received per hour. 
 Print the ID and salary (with two decimal places) of the employee for a particular month.
*/

#include<stdio.h>
int main()
{
    char id [11];
    int hours ;
    double value , salary ;

    printf("\n");

    printf("Enter the Employees ID ");
    scanf("%s",id);
    printf("Enter the Working Hours ");
    scanf("%d",&hours);
    printf("Enter the Employee Salary amount/hrs ");
    scanf("%lf",&value);

    salary = value * hours;

    printf("\n");
    printf("The Employees ID is  %s \n",id);
    printf("The Employees Workin hours is  \n%d",hours);
    printf("The Employees Salary is U$  %.2lf\n",salary);
    printf("\n");

    return 0;
}
