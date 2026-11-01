#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int cmp(const void *a,const void *b)
{   
    char *str1=(char*)a;
    char *str2=(char*)b;
    char s1[200],s2[200];
    strcpy(s1,(char*)a);
    strcat(s1,(char*)b);
    strcpy(s2,(char*)b);
    strcat(s2,(char*)a);
    return strcmp(s2,s1);
}
int main()
{   
    int n;
    if(scanf("%d",&n)!=1) return 0;
    char str[25][105];
    for (int i = 0; i < n; i++)
    {
    scanf("%s",str[i]);
    }
    qsort(str,n,sizeof(str[0]),cmp);
    for (int i = 0; i < n;i++)
    {
    printf("%s",str[i]);
    }
    printf("\n");
    return 0;
}
