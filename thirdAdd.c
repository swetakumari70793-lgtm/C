// Write a C program that accepts three integers from the user and calculates the sum of the two integers.

#include<stdio.h>
int main()
{
    int integer1;
    int integer2;
    int integer3;
    
    printf("\n");
    printf("Enter the first integer value ");
    scanf("%d",&integer1);

    printf("Enter the second integer value ");
    scanf("%d",&integer2);

    printf("Enter the third integer value ");
    scanf("%d",&integer3);

    printf("\n");

    int add = integer1 + integer2 + integer3;

    printf("Sum of three integer value is %d + %d + %d = %d", integer1,integer2, integer3,add);
    printf("\n");
    return 0;


}