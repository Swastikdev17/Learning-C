#include <stdio.h>

int main()
{
    int c;
    printf("Enter the start point:\n");
    scanf("%d",&c);
    while (c<=100){
        printf("%d \t",c);
        c = c+1;
    }
    return 0;
}