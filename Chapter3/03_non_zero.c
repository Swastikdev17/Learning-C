// It is said that every non zero value is considered true in  if statement in c language
#include <stdio.h>

int main()
{
    if (7)
    {
        printf("This \"if\" is executed as 7 being a non zero value has triggered a true in the condition.");
    }
    if (0)
    {
        printf("This won't be executed as we have o in the condition");
    } // This IF statement would not be executed as there is no relatioinal operator condition or a non zero value.
    return 0;
}