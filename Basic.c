#include<stdio.h>
int main()
{
        int a,b,c;
        printf("Enter First Number: ");
        scanf("%d",&a);
        printf("Enter Second Number: ");
        scanf("%d",&b);
        c=a+b;
        printf("Sum of Both Numbers: %d",c);
        c=a-b;
        printf("Subtraction of Both Numbers: %d",c);
        c=a*b;
        printf("Multiplication of Both Numbers: %d",c);
        c=a/b;
        printf("Division of Both Numbers: %d",c);
return 0;
}