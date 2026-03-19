#include <stdio.h>

int main()
{
    int age;
    char grade;
    float gpa;

    scanf("%d %f %c", &age, &gpa, &grade);
    
    // 순서 
    printf("%d %f %c\n", age, gpa, grade);

    return 0;
}
