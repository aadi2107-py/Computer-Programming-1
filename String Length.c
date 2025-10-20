#include <stdio.h>
#include <string.h>
int main()

{
    char str[100];
    int Length = 0;

    printf("Please enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[Length] != '\0')
    {
        Length++;
    }
    
    printf("The Length of the string is: %d\n", Length);
    
    return 0;
}