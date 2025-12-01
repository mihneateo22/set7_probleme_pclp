#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void transformare(char s[]);

int main()
{
    char s[100];
    printf("introduceti sirul de modificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    transformare(s);
    printf("sirul modificat este : ");
    puts(s);
    return 0;
}

void transformare(char s[])
{
    int i;
    for(i = 0; i < strlen(s); i++)
    {
        if(strchr("aeiou", s[i]))
            s[i] -= 32;
            // sau s[i] = toupper(s[i]);
    }
}