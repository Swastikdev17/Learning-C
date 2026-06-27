#include <stdio.h>

int main()
{
    int a;
    printf("Please enter the number to check divisibilty:\n");
    scanf("%d",&a);
    printf("The remainder of %d/97 is:%d",a,a%97);
    return 0;
}