#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age:\t");
    scanf("%d", &age);
    if (age >= 16 && age < 18)
    {
        printf("You are a minor but you can apply for learning lisense");
    }
    else if (age < 18)
    {
        printf("You are a minor");
    }
    else if (age >= 60)
    {
        printf("You are a senior citizen");
    }
    else
    {
        printf("You are an adult");
    }
    return 0;
}