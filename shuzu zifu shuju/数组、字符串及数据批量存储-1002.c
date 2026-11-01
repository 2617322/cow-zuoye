#include<stdio.h>
int main(){
    int a,b,c=0,i,d,e;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a;i++){
        d=i;
        while(d!=0){
            e=d;
            e%=10;
            if(e==b){
                c++;
            }
            d/=10;
            
        }
    }
    printf("%d",c);
}
