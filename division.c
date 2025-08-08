#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter a number:");
    scanf("%d",&a);

    printf("Enter a number:");
    scanf("%f",&b);
    
    c = a / b;
    printf("%d / %f = %f\n",a,b,c);
    return 0;
}

