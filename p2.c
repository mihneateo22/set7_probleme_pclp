#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100];
    int i, cnt = 0;
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    while(s[cnt] != '\0')
    {
        cnt++;
    }
    printf("sirul are %d caractere.\n", cnt);
    printf("sirul este : ");
    for(i = 0; i < cnt; i++)
        printf("%c", s[i]);
    printf("\n");
    return 0;
}