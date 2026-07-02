#include <stdio.h>

int main()
{
    int income;
    printf("Enter your monthly Income in rupees:\n");
    scanf("%d", &income);
    float tax;
    if (income > 250000 && income <= 500000)
    {
        tax = (5.0 / 100.0) * (income-250000);
    }
    else if (income > 500000 && income <= 1000000)
    {
        tax = (5.0/100)*(500000-250000)+(20.0 / 100.0) * (income-500000);
    }
    else if (income > 1000000)
    {
        tax = (5.0/100)*(500000-250000)+(20.0 / 100.0) * (income-500000)+(30.0 / 100.0) * (income-1000000);
    }
    else
    {
        printf("Your income is less than 2.5 lakhs , Therefore no tax for you");
    }
    printf("The amount of tax for your income will be %.2f and your salary after tax deduction will be %.2f", tax, income - tax);
    return 0;
}