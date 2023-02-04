#include<stdio.h>
    int main(){
        int a[10],b;
        printf("Enter the Initial Number: ");
        for(b=0;b<10;b++)
        {
        scanf("%d",&a[b]);
        }
        for(b=0;b<10;b++)
        {
            printf("%d\t",a[b]);
        }
}