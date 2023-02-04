//FizzBuzz: A program that prints numbers from 1 to 100, but for multiples of 3, it prints "Fizz" instead of the number, and for multiples of 5, it prints "Buzz."
#include<stdio.h>

    int main(){
        int i;
        for(i=1;i<=100;i++)
        {
            if(i%3==0 && i%5==0)
        {
            printf("FizzBuzz\n");
        }
        else if (i %3==0)
        {
            printf("Fizz\n");
        }
        else if (i %5==0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d\n",i);
        }
    }
return 0;
}