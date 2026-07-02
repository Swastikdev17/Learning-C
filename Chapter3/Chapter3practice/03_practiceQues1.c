#include <stdio.h>

int main()
{
    float suba, subb, subc;
    printf("Please enter the marks of subject a out of 100:\t");
    scanf("%f", &suba);
    printf("Please enter the marks of subject b out of 100:\t");
    scanf("%f", &subb);
    printf("Please enter the marks of subject c out of 100:\t");
    scanf("%f", &subc);
    float pera = (suba / 100) * 100;
    float perb = (subb / 100) * 100;
    float perc = (subc / 100) * 100;
    float perall = ((suba + subb + subc) / 300) * 100;
    if (pera >= 33 && perb >= 33 && perc >= 33 && perall >= 40)
    {
        printf("The student has passed the exams with overall percentage of %f.", perall);
    }
    else
    {
        printf("The student has failed the exam.");
    }
    return 0;
}