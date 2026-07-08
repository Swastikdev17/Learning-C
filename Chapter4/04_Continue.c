#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value till which you want the loop to continue: ");
    scanf("%d",&n);
    for(int i=1;i<=30;i++){
        if(i%n==0){
            printf("This value was skipped due to the continue statement\n");
            continue;
        }
    printf("The value of i is %d \n",i);
    }
    return 0;
}