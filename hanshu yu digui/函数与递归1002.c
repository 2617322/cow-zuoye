#include<stdio.h>
int main(){
    int y,m,x,i,n,c,count=0;
    int arr[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d %d",&y,&m,&x);
    next:
    count=0;
    if((y%4==0 && y%100!=0) || y%400==0){
        arr[2]=29;
    }else{
        arr[2]=28;
    }
    n=y*100+m;
    for(i=0;i<6;i++){
        c=n%10;
        n/=10;
        if(c==x){
            count+=1;
        }
    }
    count*=arr[m];
    for(i=0;i<arr[m];i++){
        n=i+1;
        for(y=0;y<2;y++){
            c=n%10;
            n/=10;
            if(c==x){
                count+=1;
            }
        }
    }
    printf("%d\n",count);
    if(scanf("%d%d%d",&y,&m,&x)==3){
        goto next;
    }
}
