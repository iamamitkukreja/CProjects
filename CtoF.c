//Program to Calculate Celsius into fahrenheit
#include<stdio.h>

    int main(){
        int celsius, fahrenheit;
        printf("Enter the Celsius Value: ");
        scanf("%d", &celsius);
        fahrenheit = (celsius * 9/5) + 32;
        printf("Here is the temperature In Fahrenheit:%d",fahrenheit);
        
    
return 0;
}