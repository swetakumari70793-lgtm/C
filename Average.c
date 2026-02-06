/* Write a C program that accepts two item's weight and number of purchases (floating point values) and calculates their average value.
*/

#include<stdio.h>
int main()
{
    double wi1 , wi2 , ci1 , ci2 , result ;
     
    printf("\n");
    printf("Weight-Item1 ");
    scanf("%lf",&wi1);

    printf("No. of Item1 ");
    scanf("%lf",&ci1);

    printf("Weight-Item2 ");
    scanf("%lf",&wi2);

    printf("No. of Item2 ");
    scanf("%lf",&ci2);

    result =( (wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
    printf("\n");

    printf("Average value is = %f\n\n",result);

    return 0;



}