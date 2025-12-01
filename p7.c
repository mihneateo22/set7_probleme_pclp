#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100];
    int i;
    printf("introduceti mesajul de codificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] != ' ')
        {
            if(s[i] == 'z')
                s[i] = 'a';
            else s[i] = s[i] + 1;
        }
    }
    printf("mesajul codificat este : \n");
    puts(s);
    return 0;
}