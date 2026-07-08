#include <stdio.h>

int main()
{
    //Factorial of a number using while loop.
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i= 1;
    int product=1;
    while(i<=n){
        product*=i;
        i++;
    }
    printf("The factorial of %d is: %d",n,product);
    return 0;
}