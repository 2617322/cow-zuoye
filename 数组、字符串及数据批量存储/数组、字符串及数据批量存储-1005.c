#include <stdio.h>
int main(){
    
   int n,big[105];
    scanf("%d",&n);
    for (int i = 0; i < n;i++)
    {
        scanf("%d",&big[i]);
    }
     if (big[n - 1] == 15)
    {
        printf("DOWN");
    }
     else if (big[n - 1] == 0)
    {
        printf("UP");
    }
    else if (n == 1)
    {
        printf("-1");
    }
    else if (big[n - 2] < big[n-1])
    {
        printf("UP");
     }
    else if (big[n - 2] > big[n-1])
    {
        printf("DOWN");
     }
} 
