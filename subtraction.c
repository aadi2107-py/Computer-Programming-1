#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter a number");
    scanf("%d",&a);

    printf("Enter a number");
    scanf("%d",&b);
        
    c = a - b;
    printf("%d - %d = %f\n",a,b,c);
    return 0;
}

