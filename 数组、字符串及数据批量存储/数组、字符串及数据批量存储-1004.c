#include<stdio.h>
int main(){
   int L,M,tree[10001],shu;
    scanf("%d %d",&L,&M);
    for(int i=0;i<=L;i++)
    {
        tree[i]=1;
    }
    int l,r;
    for(int i=1;i<=M;i++)
    {
        scanf("%d %d",&l,&r);
        for(int j=l;j<=r;j++)
        {
            tree[j]=0;
        }
    }
    for(int i=0;i<=L;i++)
    {
        if(tree[i]==1){
            shu++;
        }
    }
    printf("%d",shu);
}
