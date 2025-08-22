#include<stdio.h>
#include<math.h>
int main ()
{
    int a,b,c;
    printf("Enter the 1st Number: ");
    scanf("%d",&a);

    printf("Enter the 2nd Number: ");
    scanf("%d",&b);

    printf("Enter the 3rd Number: ");
    scanf("%d",&c);

    if (a>b && b>c)
    {
        printf("Highest is %d\n",a);
        printf("Lowest is %d\n",c);
    }
    else if (a>c && c>b)
    {
        printf("Highest is %d\n",a);
        printf("Lowest is %d\n",b);
    }
    else if (b>a && a>c)
    {
        printf("Highest is %d\n",b);
        printf("Lowest is %d\n",c);
    }
    else if (b>c && c>a)
    {
        printf("Highest is %d\n",b);
        printf("Lowest is %d\n",a);
    }
    else if (c>b && b>a)
    {
        printf("Highest is %d\n",c);
        printf("Lowest is %d\n",a);
    }
    else if (c>a && a>b)
    {
        printf("Highest is %d\n",c);
        printf("Lowest is %d\n",b);
    }
    else if (a==b && a>c)
    {
        printf("1st and 2nd number are equal to each other %d=%d\n",a,b);
        printf("Lowest is %d\n",c);
    }
    else if (a==b && a<c)
    {
        printf("1st and 2nd number are equal to each other %d=%d\n",a,b);
        printf("Highest is %d\n",c);
    }
    else if(b==c && b>a)
    {
        printf("2nd and 3rd number are equal to each other %d=%d\n",b,c);
        printf("Lowest is %d\n",a);
    }
    else if (b==c && b<a)
    {
        printf("2nd and 3rd number are equal to each other %d=%d\n",b,c);
        printf("Highest is %d\n",a);
    }
    else if (a==c && a>b)
    {
        printf("1st and 3rd number are equal to each other %d=%d\n",a,c);
        printf("Lowest is %d\n",b);
    }
    else if (a==c && a<b)
    {
        printf("1st and 3rd number are equal to each other %d=%d\n",a,c);
        printf("Highest is %d\n",b);
    }
    else if (a==b && b==c)
    {
        printf("All three numbers are equal %d = %d = %d\n",a,b,c);
    }
    else
    {
        printf("No possible outcome");
    }


    return 0;

}

