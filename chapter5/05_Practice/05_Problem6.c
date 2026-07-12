#include <stdio.h>

int sumn(int n){
    if (n==0){
        return n;
    }
    return n + sumn(n-1);
}
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("The sum of first %d natural number = %d",n,sumn(n));
    return 0;
}