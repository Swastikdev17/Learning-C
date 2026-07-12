#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the side of the square: ");
    scanf("%d",&side);
    printf("The AREA of the square is: %.1f\n",pow(side,2));
    return 0;
}