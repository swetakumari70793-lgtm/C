// Write a C program that accepts five integers and finds the maximum of three.

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int I1 , I2 , I3 , I4 ,I5 , max1 , max2 , max3 , max ;

    printf("\n");
 
    printf(" Enter first Integer value ");
    scanf("%d",&I1);
    printf(" Enter second Integer value ");
    scanf("%d",&I2);
    printf(" Enter thirds Integer value ");
    scanf("%d",&I3);
    printf(" Enter fourth Integer value ");
    scanf("%d",&I4);
    printf(" Enter fiveth Integer value ");
    scanf("%d",&I5);


    max1 = (I1 + I2 + abs(I1 - I2) ) / 2;
    max2 = (I3 + I4 + abs(I3 - I4) ) / 2;
    max3 = ((max1 + max2 + abs(max1 - max2))) / 2;

    max = (max3 + I5 + abs(max3 - I5)) / 2;

    printf("\n");
    printf("Maximum1 %d \n",max1);
    printf("Maximum2 %d \n",max2);
    printf("Maximum3 %d \n",max3);
    printf("Maximum value of five integer  %d\n",max);
    printf("\n");
    return 0;
}