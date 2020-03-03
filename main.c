#include <stdio.h>

#define VOLVE 200

void input(char*);

int main()
{
    const char str2[10] = "circle";
    char str1[VOLVE];

    input(str1);

    return 0;
}
void input(char* str1)
{
    printf("Input the circle's coordinate and radius\n");
    printf("Input in this format: 'circle(x, y, r)'\n");

    fgets(str1, VOLVE, stdin);
}
