#include <stdio.h>

int main()
{
    // Program to check if the number entered is prime or not using all three loops.
    int n;
    printf("Enter the number to be checked: ");
    scanf("%d", &n);
    int i = 2;
    int notprime = 0;
    // for (i; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         notprime = 1;
    //         break;
    //     }
    // }
    // while (i < n)
    // {
    //     if (n % i == 0)
    //     {
    //         notprime = 1;
    //         break;
    //     }
    //     i++;
    // }
    do
    {
        if (n % i == 0)
        {
            notprime = 1;
            break;
        }
        i++;
    } while (i < n);
    if (notprime)
    {
        printf("The entered number is not prime.");
    }
    else
    {
        printf("The entered number is prime.");
    }
    return 0;
}