#include <stdio.h>

int main()
{
    //This program prints n natural numbers in decreasing order 
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (n;n;n--)
    {
        printf("%d\t",n);
    }
    
    return 0;
}