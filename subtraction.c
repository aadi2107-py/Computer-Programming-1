#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c = a - b;
    printf("%d - %d = %f\n",a,b,c);
    return 0;
}
