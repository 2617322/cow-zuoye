#include<stdio.h>
int main(){
    int n,fn;
    scanf("%d",&n);
    if(n%2==0){
        fn=n/2;
    }else{
        fn=3*n+1;
    }
    printf("%d",fn);
}
