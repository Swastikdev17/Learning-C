#include <stdio.h>

int main()
{
    //This program sums the first n natural numbers using while loop.
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    /*int i=1;
    int sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }*/
    int sum; 
    /*sum= (n*(n+1))/2;*/ //Gauss formula for sum of the first n natural numbers.
    printf("The sum of first %d natural numbers is: %d",n,sum);
    return 0;
}/*Both of the approaches are correct, but their time complexity is different.
The first code shows the time complexity of O(n) whereas the second one shows time complexity ofO(1).
The 2nd code is faster for any amount of data.*/