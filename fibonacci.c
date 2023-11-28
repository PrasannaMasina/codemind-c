#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t1=0,t2=1,t3;
    printf("%d %d ",t1,t2);
    int i=3;
    while(i<=n){
        t3=t1+t2;
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        i++;
    }
}