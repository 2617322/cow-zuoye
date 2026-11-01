#include<stdio.h>
int main(){
    int a,b=1,c=1,e=0;
    scanf("%d",&a);
    for(b=1;a>0;a-0){
        printf("%4d",c);
        e++;
        c++;
        if(e>=b){
            printf("\n");
            e=0;
            b++;
            a--;
        }
    }
 
}
