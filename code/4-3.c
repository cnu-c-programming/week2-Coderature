#include <stdio.h>

int main()
{
    int n, i;
    int p = 1;

    scanf("%d", &n);

    if (n < 2)
        p = 0;
    else {
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                p = 0;
                break;
            }
        }
    }

    if (p == 1)
        printf("true\n");
    else
        printf("false\n");

    return 0;
}
