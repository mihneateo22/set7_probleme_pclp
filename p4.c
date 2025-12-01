#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char sir1[20], sir2[20], sir3[20], rez[60] = "";
    int i, cnt_rez = 0;
    printf("primul sir : ");
    fgets(sir1, 20, stdin);
    printf("al doiles sir : ");
    fgets(sir2, 20, stdin);
    printf("al treilea sir : ");
    fgets(sir3, 20, stdin);
    sir1[strcspn(sir1, "\n")] = '\0';
    sir2[strcspn(sir2, "\n")] = '\0';
    sir3[strcspn(sir3, "\n")] = '\0';
    // strcat(sir1, sir2);
    // strcat(sir1, sir3);
    // printf("cele 3 siruri concatenate : ");
    // puts(sir1);
    for(i = 0; i < strlen(sir1); i++)
        rez[cnt_rez++] = sir1[i];
    for(i = 0; i < strlen(sir2); i++)
        rez[cnt_rez++] = sir2[i];
    for(i = 0; i < strlen(sir3); i++)
        rez[cnt_rez++] = sir3[i];
    rez[cnt_rez] = '\0';
    printf("cele 3 siruri concatenate : ");
    puts(rez);
    return 0;
}