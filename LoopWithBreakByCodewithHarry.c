#include<stdio.h>

    int main(){
        int a,age;
        for(a=0;a<=100;a++)
        {
            printf("Enter Your Age:");
            scanf("%d",&age);
            if(age>18)
            {
                printf("You Can Drive the Car");
                break;
            }
            else
            {
                printf("You Can't Drive Car\n");
            }

            printf("Hello, World\n");
            printf("Hello, World\n");
            printf("Hello, World\n");
        }