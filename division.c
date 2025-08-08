#include<stdio.h>
int main()
{
    int a;
    float b,c;
    printf("Enter two numbers:");
    scanf("%d %f",&a,&b);
    c = a / b;
    printf("%d / %f = %f\n",a,b,c);
    return 0;
}
