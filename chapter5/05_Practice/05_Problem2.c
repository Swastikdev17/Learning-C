#include <stdio.h>
// Function to convert Celcius to Fahrenheit. 
float C_to_F(float c)
{
    float F = (c * 9 / 5) + 32;
    printf("%fC = %.1fF",c,F);
    return F;
}
int main()
{
    float c;
    printf("Enter the degree celcius: ");
    scanf("%f",&c);
    C_to_F(c);
    return 0;
}