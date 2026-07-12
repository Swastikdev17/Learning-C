#include <stdio.h>

int fact (int x){
    // int i=1;
    // int prod= 1;
    // while (i<=x){
    //     prod *= i;
    //     i++;
    // }
    // printf("%d! = %d",x,prod );
    if (x == 0 || x == 1){
        return 1;
    }
    return fact (x-1) * x;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("%d! = %d",x,fact(x));
    return 0;
}