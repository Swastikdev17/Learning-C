#include <stdio.h>

int avg (int x,int y,int z){
    float av= (x+y+z)/3;
    printf("Average of %d,%d and %d = %.10f",x,y,z,av);
}
int main()
{
    int a,b,c;
    printf("Enter the First number: ");
    scanf("%d",&a);
    printf("Enter the Second number: ");
    scanf("%d",&b);
    printf("Enter the Third number: ");
    scanf("%d",&c);
    avg(a,b,c);
    return 0;
}