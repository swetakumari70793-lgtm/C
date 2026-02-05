// Write a C program that accepts two integers from the user and calculates the product of the two integers.

#include<stdio.h>
int main()
{
    int integer1;
    int integer2;
    int product;
    printf("\n");
    printf("First integers value is ");
    scanf("%d",&integer1);
    printf("Second integers value is ");
    scanf("%d",&integer2);

    product = integer1 * integer2;
    
    printf("\n"); 

    printf("Product is %d * %d = %d \n",integer1,integer2,product);
    
    printf("\n");
    
    return 0;
    
}