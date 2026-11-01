#include<stdio.h>
int main(){
    int a,b,c=0,i,d,e;
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++){
        d=i;
        while(d!=0){
            e=d;
            e%=10;
            if(e==2){
                c++;
            }
            d/=10;
            
        }
    }
    printf("%d",c);
}
