#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter the 1st number:");
    scanf("%d",&a);

    printf("Enter the 2nd number:");
    scanf("%f",&b);
    
    c = a / b;
    printf("%d / %f = %f\n",a,b,c);
    return 0;
}


