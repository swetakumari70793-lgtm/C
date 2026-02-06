// Write a C program that accepts three integers and finds the maximum of three.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int I1 , I2 , I3 , result , max ;

    printf("\n");
 
    printf(" Enter first Integer value ");
    scanf("%d",&I1);
    printf(" Enter second Integer value ");
    scanf("%d",&I2);
    printf(" Enter thirds Integer value ");
    scanf("%d",&I3);

    result = (I1 + I2 + abs(I1 - I2)) / 2;
    max = (result + I3 + abs(result - I3)) / 2;

    printf("\n");
    printf("Resutl %d \n",result);
    printf("Maximum value of three integer  %d\n",max);
    printf("\n");
    return 0;
}