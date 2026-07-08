#include <stdio.h>

int main()
{
    int i=5;
    do {
        printf("The value of i is :%d",i++);
    } while(i<4); 
    /*Even though the condition of the while is false , as we have used a do-while loop, the code block executed once*/
    return 0;
}