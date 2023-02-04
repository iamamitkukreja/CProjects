#include<stdio.h>

    int main(){

    int a;
    // For Loop
    for(a=0;a<11;a++)
    {
        printf("%d\n",a);
    }
    
    // While Loop
    int b=3;
    while (b<=30)
    {
        printf("%d\t",b);
        b=b+3;
    }
    //DoWhile Loop
    int c=10;
    do
    {
        printf("%d\n",c);
            c=c+10;

    }
    while(c<=100);

//User Input Loop

int d,e,f;
printf("Enter the First Number: ");
scanf("%d",&d); 
printf("Enter the Second Number: ");
scanf("%d",&e); 
for(f=d;f<=e;f++)
{
    printf("%d\n",f);  
    
}
    return 0;
}