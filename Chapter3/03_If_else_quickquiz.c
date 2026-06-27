#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks of the student");
    scanf("%d", &marks);
    if (marks >= 90 && marks <= 100)
    {
        printf("A grade");
    }
    else if (marks >= 80 && marks <= 89)
    {
        printf("B grade");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("C grade");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("D grade");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("E grade");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}