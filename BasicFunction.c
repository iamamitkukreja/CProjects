#include<stdio.h>
void hello();
int main()
{
    hello();
    return 0;
}

void hello()
{
    char a[35];
    printf("Hello, There\n");
    printf("Enter Your Name: ");
    fgets(a,35,stdin);
    puts(a);
}