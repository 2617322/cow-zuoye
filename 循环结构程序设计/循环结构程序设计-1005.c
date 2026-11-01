#include<stdio.h>
int main(){
    int n,space_step;
    scanf("%d",&n);
    int star_step=1;
    space_step=2;
    int space=n*2;
    int star=1;
    while(space>0){
        int i=0;
        while(i<space){
            printf(" ");
            i++;
        }
        i=0;
        while(i<star){
            printf("*");
            i++;
        }
        printf("\n");
        space-=space_step;
        star+=star_step;
    }
    int mid_star = n+1;
    int i = 0;
    while(i<mid_star){
        printf("*");
        i++;
    }
    printf("\n");
    for(space=space_step,star=mid_star-1;star>0;space+=space_step,star-=star_step){
       i=0;
       while(i<space){
        printf(" ");
        i++;
    
    }
        i=0;
        while(i<star){
            printf("*");
            i++;
}
            printf("\n");
        }
    }
