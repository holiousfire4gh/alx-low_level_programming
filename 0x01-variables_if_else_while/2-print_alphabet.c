#include <stdio.h>

int main()
{
    char ch = 'a';

    if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase alphabet.\n");
    }
    else
    {
        printf("Not a lowercase alphabet.\n");
    }

    return 0;
}
