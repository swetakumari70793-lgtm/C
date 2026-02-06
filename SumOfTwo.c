//  Write a C program that accepts two integers from the user and calculates the sum of the two integers.

#include<stdio.h>
int main()
{
    int integer1 ;
    int integer2 ;
    int sum;
    printf("\n");
    printf("Input the first integer ");
    scanf("%d",&integer1);
    printf("Input the second integer ");
    scanf("%d",&integer2);

    sum = integer1 + integer2 ;

    printf("Sum of the above two integer %d + %d = %d ",integer1,integer2,sum);
    printf("\n\n");

    return 0;

}