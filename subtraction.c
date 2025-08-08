#include<stdio.h>
int main()
{
    int a,b;
    float c;
    printf("Enter the 1st number");
    scanf("%d",&a);

    printf("Enter the 2nd number");
    scanf("%d",&b);
        
    c = a - b;
    printf("%d - %d = %f\n",a,b,c);
    return 0;
}


