#include<stdio.h>
int main(){
    int n,k,m,i;
    scanf("%d%d%d",&n,&k,&m);
    int a[100];
    for(i=0;i<n;i++)
    {
        a[i]=1;
    }
    int out,begin=k,bao=0;
    for(out=0;out<n-1;out+=0){
        if(a[begin]==1){
            bao++;
            if(bao==m){
                a[begin]=0;
                bao=0;
                out++;
            }
        }
        begin=(begin+1)%n;
    }
    for(i=0;i<n;i++){
        if(a[i]==1){
            printf("%d",i);
        }
    }
    
    
}
