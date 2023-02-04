#include<stdio.h>

    int main(){
        int age;
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age>18)
        {
            printf("You're Eligible to Vote in the Election");
        }
        else
        {
            printf("You're Not Eligible to Vote in the Election");
        }
    
return 0;
}