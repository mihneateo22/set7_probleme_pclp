#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool sufix(char a[], char b[]);

int main()
{
    char a[100], b[100];
    printf("introduceti sirul a : ");
    fgets(a, 100, stdin);
    a[strcspn(a, "\n")] = '\0';
    printf("introduceti sirul b : ");
    fgets(b, 100, stdin);
    b[strcspn(b, "\n")] = '\0';
    if(sufix(a, b) == true)
        printf("AFIRMATIV\n");
    else printf("NEGATIV\n");
    return 0;
}

bool sufix(char a[], char b[])
{
    int i, length_a = strlen(a), length_b = strlen(b);
    if(length_a > length_b)
        return false;
    for(i = 0; i < length_a; i++)
    {
        if(a[i] != b[length_b - length_a + i])
            return false;
    }
    return true;
}