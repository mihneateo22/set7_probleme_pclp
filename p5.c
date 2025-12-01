#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[100];
    int i, j;
    printf("introduceti textul de verificat : ");
    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';
    for(i = 0; i < strlen(s); i++)
    {
        for(j = 0; j < strlen(s); j++)
        {
            if(j != i)
                printf("%c", s[j]);
        }
        printf("\n");
    }
    return 0;
}