// Write a C program to compute the perimeter and area of a circle with a given radius.

#include<stdio.h>
int main()
{
    int radius;
    float perimeter , area ;

    printf("\n");
    printf("Enter radius of circle  ");
    scanf("%d",&radius);

    area = 3.14 * radius * radius ;

    perimeter = 2 * 3.14 * radius;

    printf("Perimeter of the circle = %f \n",perimeter);

    printf("Area of the circle = %f \n",area);
    printf("\n");

    return 0;
}