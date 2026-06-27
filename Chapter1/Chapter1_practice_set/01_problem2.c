#include <stdio.h>

int main() {
    float r;
    float h;
    printf("Please enter the radius of the cylinder:\n");
    scanf("%f", &r);
    printf("Please enter the height of the cylinder:\n");
    scanf("%f",&h);
    printf("The volume of the cylinder is calculated to be: %f", 3.14*r*r*h);
    return 0;
}