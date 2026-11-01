#include<stdio.h>
#include<stdlib.h>
int daoxu(const void* a,const void* b){
    return *(int*)b-*(int*)a;
}
    int day[100001];
    int night[100001];
    int diff[100001];
int main(){
    int n,k;
    long long sum=0;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&day[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&night[i]);
    }
    for(int i=0;i<n;i++){
        diff[i] = day[i] - night[i];
        sum=sum+night[i];
    }
    qsort(diff,n,sizeof(int),daoxu);
    for(int i=0;i<k;i++){
        sum=sum+diff[i];
    }
    printf("%lld\n",sum);
}
