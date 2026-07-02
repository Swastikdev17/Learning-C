#include <stdio.h>

int main() {
    int P,R,T;
    printf("Enter the Principal amount:");
    scanf("%d",&P);
    printf("Enter the Rate of interest:");
    scanf("%d",&R);
    printf("Enter the Time period in years:");
    scanf("%d",&T);
    printf("The simple interest for the following data is : %d", (P*R*T)/100);
    return 0;
}