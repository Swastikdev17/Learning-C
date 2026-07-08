#include <stdio.h>

int main()
{
    // This code sums up the first 10 multiples of 8.
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        
        sum+=(i*8);
    }
    printf("The sum of the first 10 multiples of 8 is: %d",sum);
    return 0;
}