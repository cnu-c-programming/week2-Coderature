#include <stdio.h>

int main()
{
    int a, b, c;

    // 대입
    a = b = c = 5;
    printf("%d %d %d\n", a, b, c);

    // 우선순위
    a = 2 + 3 * 4;
    printf("%d %d %d\n", a, b, c);

    // 증가 연산
    c = a++ + ++b;
    printf("%d %d %d\n", a, b, c);

    return 0;
}
