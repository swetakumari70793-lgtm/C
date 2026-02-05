// write a program to perform all arithmatic operator.
#include<stdio.h>
int main()
{
    int N1 , N2, add , mul , div , mod , sub ;
    printf("Enter Number1 ");
    scanf("%d" , & N1);
    printf("Enter Number2 ");
    scanf("%d" , & N2);
    add=N1+N2;
    sub=N1-N2;
    mul=N1*N2;
    div=N1/N2;
    mod=N1%N2;
    printf("\nAddition is %d + %d = %d",N1,N2,add);
    printf("\nSubstraction is %d - %d = %d",N1,N2,sub);
    printf("\nMultiplication is %d * %d = %d",N1,N2,mul);
    printf("\nDivisible of %d / %d = %d",N1,N2,div);
    printf("\nmod of %d / %d = %d\n",N1,N2,mod);
    return 0;
}