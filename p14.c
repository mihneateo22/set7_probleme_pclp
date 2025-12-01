#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    unsigned int n, i, j, folosit[100] = {0}, cnt = 1;
    char m[100][100];
    printf("introduceti numarul de cuvinte : ");
    scanf("%u", &n);
    getchar();
    printf("introduceti cuvintele : \n");
    for(i = 0; i < n; i++)
    {
        fgets(m[i], 101, stdin);
        m[i][strcspn(m[i], "\n")] = '\0';
    }
    printf("frecventa cuvintelor : \n");
    for(i = 0; i < n; i++)
    {
        if(folosit[i] == 0)
        {
            cnt = 1;
            folosit[i] = 1;
        for(j = i + 1; j < n; j++)
        {
            if(strcmp(m[i], m[j]) == 0)
            {
                cnt++;
                folosit[j] = 1;
            }
        }
        printf("%s : %d\n", m[i], cnt);
        }
    }
    return 0;
}