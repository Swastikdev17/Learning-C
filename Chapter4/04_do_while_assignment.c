#include <stdio.h>

int main()
{
    //This progarm prints n number of natural numbers.
    int start=0;
    int n;
    scanf("%d",&n);
    do
    {
        printf("%d\n",start++);
    } while (start<=n);
    
    return 0;
}