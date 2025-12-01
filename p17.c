#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[21], b[21];
    int i, j, k, length, cnt = 0, contorizare_while;
    printf("cuvantul in care caut (a) : ");
    fgets(a, 21, stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("cuvantul cautat (b) : ");
    fgets(b, 21, stdin);
    b[strcspn(b, "\n")] = '\0';
    for(i = 0; i < strlen(a); i++)
    {
        if(a[i] == b[0])
        {
            contorizare_while = 0;
            j = i + 1;
            k = 1;
            length = 1;
            while(b[k] != '\0' && a[j] != '\0' && a[j] == b[k])
            {
                length++;
                j++;
                k++;
                contorizare_while++;
            }
            if(length == strlen(b))
                cnt++;
        }
    }
    if(cnt == 1)
        printf("raspunsul este AFIRMATIV\n");
    else printf("raspunsul este NEGATIV\n");
    return 0;
}