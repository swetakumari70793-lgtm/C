// Write a program to enter any two number from user and add them.
#include<stdio.h>
int main()
{
    int a , b , add;
    printf("Enter any two number ");
    scanf("%d %d",&a,&b);
    add=a+b;
    printf("Addition is %d + %d = %d ",a,b,add);
    return 0;
}