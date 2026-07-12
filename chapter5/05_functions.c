#include <stdio.h>

int sum(int, int);// Function prototype.
int sum(int x, int y)// Function definition.
{
    printf("The sum of the numbers is :%d", x + y);
    return x+y;
}

int main()
{
    int a;
    int b;
    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);
    sum(a,b);
    // int c = sum(a, b);
    // printf("%d",c);
    return 0;
}