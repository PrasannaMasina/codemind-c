#include<stdio.h>
int main()
{
    int n,flage=0;
    scanf("%d",&n);
    int t1=0,t2=1,t3;
    for(int i=3 ; i<=n ; i++){
        t3=t1+t2;
        t1=t2;
        t2=t3;
        if(n==t3){
            flage=1;
            break;
        }
    }
    if(flage==1){
        printf("True");
    }
    else{
        printf("False");
    }
}