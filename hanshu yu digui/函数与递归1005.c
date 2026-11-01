#include <stdio.h>
#include <string.h>
int main(){
    int T;
    scanf("%d", &T);
    while (T--)
    {
        char arr1[105];
        char arr2[105];
        scanf("%s%s", arr1, arr2);
        int a[105] = {0};
        int b[105] = {0};
        int c[105] = {0};

        int len1 = strlen(arr1);
        int len2 = strlen(arr2);
        for (int i = 0; i < len1; i++)
        {
            a[i] = arr1[len1 - 1 - i] - '0';
        }
        for (int q = 0; q < len2; q++)
        {
            b[q] = arr2[len2 - 1 - q] - '0'; 
        }
        for (int j = 0; j < len1; j++)
        {
            for (int k = 0; k < len2; k++)
            {
                c[j + k] += a[j] * b[k];
            }
        }
        for (int z = 0; z < len1 + len2; z++)
        {
            if (c[z] >= 10)
            {
                c[z + 1] += c[z] / 10;
                c[z] = c[z] % 10;
            }
        }

        int count = 0;
        for (int g = len1 + len2; g >= 0; g--)
        {
            if (c[g] != 0)
            {
                count = 1;
            }
            if (count!=0)
            {
                printf("%d", c[g]);
            }
        }
        printf("\n");
    }
    return 0;
}
