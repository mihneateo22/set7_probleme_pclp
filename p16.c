#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void swap_2(char s[]);
void interschimbare(char *a, char *b);

int main()
{
    char s[100];
    printf("introduceti cuvantul de modificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    swap_2(s);
    printf("cuvantul modificat este : ");
    puts(s);
    return 0;
}

void interschimbare(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_2(char s[])
{
    unsigned int i;
    for(i = 0; i < strlen(s); i += 2)
        interschimbare(&s[i], &s[i + 1]);
}