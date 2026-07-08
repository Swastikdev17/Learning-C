#include <stdio.h>

int main()
{
    int i;
    printf("Enter the starting point");
    scanf("%d",&i);
    while (i<=10){
        printf("Happy Birthday\n");
        i = i+1;
    }
    return 0;
}