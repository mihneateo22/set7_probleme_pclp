#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    unsigned int n, i, ok = 0, j, k, cnt, cnt_raspuns = 0;
    bool flag = true;
    char s[100], first[100];
    printf("introduceti numarul de cuvinte : ");
    scanf("%u", &n);
    getchar();
    printf("introduceti cuvintele pe rand : ");
    for(i = 0; i < n; i++)
    {
        fgets(s, 100, stdin);
        s[strcspn(s, "\n")] = '\0';
        if(ok == 0)
        {
            strcpy(first, s);
            ok = 1;
        }
        if(ok == 1 && i != 0)
        {
            if(strlen(s) == strlen(first))
            {
                cnt = 0;
                for(j = 0; j < strlen(first); j++)
                {
                    flag = true;
                    for(k = 0; k < strlen(s) && flag == true; k++)
                        if(first[j] == s[k])
                        {
                            cnt++;
                            flag = false;
                        }
                }
                if(cnt == strlen(first))
                    cnt_raspuns++;
            }
        }
    }
    printf("numarul de cuvinte anagrame cu primul cuvant este : %u\n", cnt_raspuns);
    return 0;
}