#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char nume1[20], nume2[20];
    unsigned int varsta1, varsta2;
    printf("introduceti numele primei persoane : ");
    fgets(nume1, 20, stdin);
    nume1[strcspn(nume1, "\n")] = '\0';
    printf("introduceti varsta primei persoane : ");
    scanf("%d", &varsta1);

    getchar();

    printf("introduceti numele celei de a 2 a persoana : ");
    fgets(nume2, 20, stdin);
    nume2[strcspn(nume2, "\n")] = '\0';
    printf("introduceti varsta celei de a 2 a persoana : ");
    scanf("%d", &varsta2);

    if(strcmp(nume1, nume2) != 0)
    {
        if(varsta1 < varsta2)
        {
            printf("numele celei mai tinere persoane este : ");
            puts(nume1); // puts() pune si un \n automat dupa ce afiseaza numele
        }
        else if(varsta2 < varsta1)
        {
            printf("numele celei mai tinere persoane este : ");
            puts(nume2);
        }
        else
        {
            printf("cele 2 persoane au aceeasi varsta.\n");
            puts(nume1);
            puts(nume2);
        }
    }
    else printf("cele 2 persoane au acelasi nume.\n");
    return 0;
}