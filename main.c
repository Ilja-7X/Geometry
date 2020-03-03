#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define VOLVE 200
#define SPACE ' '
#define NUM 6
#define BRCKT_O '('
#define BRCKT_C ')'
#define COMMA ','

void input(char*);
char* checking_spaces(char* p);
char* checking_symbol(char* p, char symbol);

int main()
{
    const char str2[10] = "circle";
    char str1[VOLVE];

    input(str1);

    char* p = str1;

    p = checking_spaces(p);

    if (strncmp(p, str2, NUM) != 0) {
        printf("Error in the word:'circle'. Try again.\n");
        return 0;
    } else
        printf("The word '%s' is written correctly\n", str2);
    p = p + NUM;

    p = checking_spaces(p);

    p = checking_symbol(p, BRCKT_O);

    p = checking_spaces(p);

    return 0;
}
void input(char* str1)
{
    printf("Input the circle's coordinate and radius\n");
    printf("Input in this format: 'circle(x, y, r)'\n");

    fgets(str1, VOLVE, stdin);
}

char* checking_spaces(char* p)
{
    while (*p == SPACE) {
        p++;
    }

    return p;
}

char* checking_symbol(char* p, char symbol)
{
    if (*p != symbol) {
        printf("The symbol was not found or is in the wrong place. Try "
               "again.\n");
        exit(0);
    } else {
        printf("The symbol '%c' is written correctly\n", symbol);
        p++;
        return p;
    }
}
