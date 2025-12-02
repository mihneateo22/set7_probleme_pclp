#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    unsigned int i, j = 0, p, q;
    char sir_pt_vocale[100], sir_pt_extragere[100];
    printf("sir pt vocale : ");
    fgets(sir_pt_vocale, 100, stdin);
    sir_pt_vocale[strcspn(sir_pt_vocale, "\n")] = '\0';
    printf("sir pentru extragere : ");
    fgets(sir_pt_extragere, 100, stdin);
    sir_pt_extragere[strcspn(sir_pt_extragere, "\n")] = '\0';
    printf("p : ");
    scanf("%u", &p);
    printf("q : ");
    scanf("%u", &q);
    getchar();
    printf("sirul extras intre pozitia p = %u si q = %u este : ", p, q);
    for(i = p + 1; i < q; i++)
        printf("%c", sir_pt_extragere[i]);
    printf("\n");
    for(i = 0; i < strlen(sir_pt_vocale); i++)
        if(strchr("aeiouAEIOU", sir_pt_vocale[i]) == NULL)
        {
            sir_pt_vocale[j] = sir_pt_vocale[i];
            j++;
        }
    sir_pt_vocale[j] = '\0';
    printf("sirul fara vocale : ");
    puts(sir_pt_vocale);
    return 0;
}