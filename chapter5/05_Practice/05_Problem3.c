#include <stdio.h>

// Function to find the force exerted by earth on mass 'm' with g = 9.8 m/s².
float Force(float m){
    float g = 9.8;
    float F = m * g;
    printf("Force exerted by earth on mass %.1f = %.2fN", m, F);
}
int main()
{
    float mass;
    printf("Enter the Mass: ");
    scanf("%f",&mass);
    Force(mass);
    return 0;
}