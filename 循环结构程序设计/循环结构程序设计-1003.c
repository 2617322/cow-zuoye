#include<stdio.h>
int main(){
int k=65,t,z,i;
scanf("%c",&t);
for(z=k;z<=t;z++){
for(i=0;i<t-z;i++){
printf(" ");
}
for(i=k;i<=z;i++){
printf("%c",i);
}
for(i=z-1;i>=k;i--){
printf("%c",i);
}
printf("\n");
}
}
