#include <stdio.h>

int main()
{
    printf("This program tells the user if the entered number is divisible by 47 or not\n");
    int num;
    printf("Please enter the number whose divisibility you wanna evaluate:\t");
    scanf("%d", &num);
    int rem = num % 47;
    if (rem == 0)
    {
        printf("The entered number is %d and it is divisible by 47", num);
    }
    else
    {
        printf("Sorry the entered number is not divisible by 47");
    }
    return 0;
}
// This program uses if-else statement to tell if the number is divisible by a certain quatity or not.