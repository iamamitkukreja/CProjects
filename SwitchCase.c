#include<stdio.h>

    int main(){
        int a,b,c;
        printf("Enter First Number:");
        scanf("%d",&a);
        printf("Enter Second Number:");
        scanf("%d",&b);
        printf("1.Addition,2.Subtraction,3.Multiplication,4.Division: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            printf("%d",a+b);
            break;

            case 2:
            printf("%d",a-b);
            break;

            case 3:
            printf("%d",a*b);
            break;

            case 4:
            printf("%d",a/b);
            break;
            
        }
        
    
return 0;
}