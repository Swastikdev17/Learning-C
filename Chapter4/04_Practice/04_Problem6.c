#include <stdio.h>

int main()
{
    // Factorial of a number using for loop.
    int n;
    printf("Enter the number to find the factorial of: ");
    scanf("%d",&n);
    int i= 1;
    int multi=1;
    for(i;i<=n;i++){
        multi*=i;
    }
    printf("The factorial of %d is: %d",n,multi);
    return 0;
}