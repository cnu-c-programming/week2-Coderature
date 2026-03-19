#include <stdio.h>

int main()
{
    char x = 127;
    x = x + 1; // -128이 됨

    printf("%d\n", x);

    return 0;
}
