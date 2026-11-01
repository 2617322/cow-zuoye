#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){  
        for(int h=1;h<=n;h++){
            for(int f=0;f<n-h;f++){ 
                printf(" "); 
            }
            for(int f=1;f<=2*h-1;f++){
                printf("*");
            }
            printf("\n");
        }
        for(int h=n-1;h>=1;h--){
            for(int f=0;f<n-h;f++){
                printf(" ");
            }
            for(int f=1;f<=2*h-1;f++){
                printf("*");
            }
            printf("\n");
        }
        }
}
