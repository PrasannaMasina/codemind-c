#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r,rev=0;
    while(n){
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("%d",rev);
}