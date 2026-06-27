#include <stdio.h>

int main()
{
    int a ;
    printf("Please enter the value of a");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("You entered 1");
        break;
        case 2:
        printf("You entered 2");
        break;
        default :
        printf("You entered a value other than 1 or 2");
        break;
    }
    return 0;
}