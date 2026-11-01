#include<stdio.h>
int main(){
    long long x,y;
    scanf("%lld %lld",&x,&y);
    long long sum=0,i,j=0;
    i=x;
    while (i<=y) {
        long long c=i;
        while (c>0) {
            j=c%10+j;
            c/=10;
        } 
        if(j%5==0){
            sum++;
        }
        j=0; 
        i++;
    }
     printf("%d",sum);
}
