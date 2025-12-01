#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100], *p, sep[] = " ";
    unsigned int cnt = 0;
    printf("introduceti sirul de verificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    p = strtok(s, sep);
    while(p != NULL)
    {
        if(strchr("aeiou", p[0]) && strchr("aeiou", p[strlen(p) - 1]))
            cnt++;
        p = strtok(NULL, sep);
    }
    printf("numarul de cuvinte care incep si se termina cu vocala este : %u\n", cnt);
    return 0;
}