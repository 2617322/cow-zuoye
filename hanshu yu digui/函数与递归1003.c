#include<stdio.h>
int main(){
    long long t;
    scanf("%lld",&t);
    if(t>2&&t%2==0){
         printf("noprime");
        return 0;
    }
    if(t>5&&t%5==0){
         printf("noprime");
        return 0;
    }
    long long a=t/10;
    
    while (a>0){       
        t=t*10+a%10;
        a/=10;
    }
    long long shu=1,i;
    
    for( i = 2;i*i<=t;i++){
        if(t % i == 0) {
            shu = 0;
            break;
        }
        
    }
    if(shu == 1) {
        printf("prime");
    } else {
        printf("noprime");
    }
    return 0;
}
        
