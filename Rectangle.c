// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches
#include<stdio.h>
int main()
{
    int height = 7 ;
    int width = 5 ;
    int perimeter = 2*(height + width);

    printf("\n");
    printf("Perimeter of rectengle 2 * %d + %d = %d \n",height,width,perimeter);
    printf("\n");

    int area = height * width;
    printf("Area of Rectangle %d * %d = %d \n",height,width,area);

    return 0;


}