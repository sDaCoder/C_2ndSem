#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "World";

    // Compare the strings using strcmp()
    int result = strcmp(str1, str2);

    // Print the comparison result
    if (result == 0)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are unequal.");
    }

    return 0;
}
