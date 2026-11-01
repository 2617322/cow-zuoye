#include<stdio.h>
int main(){
    int t,n;
    long long a[100000];
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%lld",&a[j]);}
            for(int k=0;k<n-1;k++)
            {
            for(int g=0;g<n-1-k;g++)
            {
                if(a[g]>a[g+1])
                {
                    long long t=a[g];
                    a[g]=a[g+1];
                    a[g+1]=t;
                }
            }
            }
        long long x=a[n-1]-a[0];
        double sum=0,sum2=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+a[j];
            sum2+=a[j]*a[j];
        }
        double fc=1.0*sum/n;
        double a=(sum2/n)-(fc*fc);
        printf("%lld %.3lf\n",x,a);
    }
        
    }
