#include<stdio.h>
int main(){
    int a,b;
    for(a=1;a<10;a++)
    {
        for(b=1;b<=a;b++)
        {
            if((a*b)>=10)
            {
       printf("%d*%d=%d ",b,a,a*b);
            }else{
            printf("%d*%d=%2d ",b,a,a*b);
        }
}
    printf("\n");

}
}
