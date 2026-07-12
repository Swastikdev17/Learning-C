#include <stdio.h>

// Program to print a special odd number pattern using *.
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}