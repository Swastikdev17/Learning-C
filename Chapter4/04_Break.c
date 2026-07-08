#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value till which you want the loop to continue: ");
    scanf("%d",&n);
    for(int i=1;i;i++){
        if(i==n){
            printf("The loop breaks here due to the break statement");
            break;
        }
    printf("The value of i is %d \n",i);
    }
    return 0;
}