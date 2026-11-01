#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,gong;
        scanf("%d",&n);
        int kai;
        for(kai=1;kai<=n;kai=kai+2){
            if(n-kai>0){
                int kong;
                kong=(n-kai)/2;
                while(kong--){
                    printf(" ");
                    gong++;
                }
            }
            int ting;
            ting=kai;
            while(ting--){
                printf("*");
                gong++;
            }
            while(gong<n){
                printf(" ");
                gong++;
            }
            printf("\n");
        }
        for(kai=n-2;kai>=0;kai=kai-2){
            if(n-kai>0){
                int kong;
                kong=(n-kai)/2;
                while(kong--){
                    printf(" ");
                    gong++;
                }
            }
            int ting;
            ting=kai;
            while(ting--){
                printf("*");
                gong++;
            }
            while(gong<n){
                printf(" ");
                gong++;
            }
            printf("\n");
        }
        gong=0;
    }

}
