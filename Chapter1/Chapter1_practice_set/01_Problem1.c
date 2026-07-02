#include <stdio.h>

int main() {
    int length;
    int breadth;
    printf("Enter length of the rectangle:\n");
    scanf ("%d", &length);
    printf("Enter the breadth of the rectangle:\n");
    scanf("%d", &breadth);
    printf("The areas of this rectangle is %d Sq. units", length*breadth);
    return 0;
}