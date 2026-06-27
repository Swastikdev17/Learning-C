#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a single character:\n");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)
    {
        printf("The entered character is a lower case character\n");
    }
    else
    {
        printf("The entered character is an uppercase character\n");
    }
    return 0;
}