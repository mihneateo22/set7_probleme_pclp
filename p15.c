#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

// nu e destul de explicit enuntul, asa ca nu stiu ce inseamna cuvant si ce inseamna sa le afisez cuvant cu cuvnat

int main()
{
    unsigned int cnt = 0, i;
    char s[100], *p, sep[] = " ,.:;", rez[101] = "";
    printf("introduceti sirul de verificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    p = strtok(s, sep);
    while(p != NULL)
    {
        cnt++;
        strcat(rez, p);
        strcat(rez, " ");
        p = strtok(NULL, sep);
    }
    rez[strlen(rez) - 1] = '\0';
    strcpy(s, rez);
    for(i = 0; i < strlen(s); i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}