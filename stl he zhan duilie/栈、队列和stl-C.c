#include<stdio.h>
#include<stdlib.h>
int shengxu(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int main(){
    int n,i;
    int arr[101];
    scanf("%d",&n);
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),shengxu);
    for (int i = 0; i < n-2 ; i++)
    {
        long long a = arr[i];
        long long b = arr[i+1];
        long long c = arr[i+2];
        if(a+b>c){
            printf("%d %d %d",a,b,c);
            return 0;
        }
    }
    printf("No solution");
    return 0;
}
