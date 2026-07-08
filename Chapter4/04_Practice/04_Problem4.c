#include <stdio.h>

int main()
{
    //This program uses for and do-while loop to execute the problem
    int n ;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int sum = 0;
    int i=1;
    // for(i;i<=n;i++){
    //     sum+=i;
    // }
    do
    {
        sum+=i;
        i++;
    } while (i<=n);
    
    printf("The sum of first %d natural numbers is: %d",n,sum);
    return 0;
}