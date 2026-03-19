#include <stdio.h>

int main()
{
    int a = -1;
    unsigned int b = 1;

    // a < b를 비교, a가 자동 형변환
    if (a < b) {
        printf("a < b\n");
    }
    else {
        // 결과적으로 매우 큰 양수와 1을 비교
        printf("a >= b ???\n");
    }

    return 0;
}
