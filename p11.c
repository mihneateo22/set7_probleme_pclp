#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

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
    char *p, sep[] = " ", rez[101] = ""; //are marime +1 pentru ultimul spatiu de la final
    p = strtok(s, sep);
    while(p != NULL)
    {
        p[0] = toupper(p[0]);
        p[strlen(p) - 1] = toupper(p[strlen(p) - 1]);
        strcat(rez, p);
        strcat(rez, " ");
        p = strtok(NULL, sep);
    }
    rez[strlen(rez) - 1] = '\0'; //suprascriu ultimul spatiu
    strcpy(s, rez);
}