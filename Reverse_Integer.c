#include<stdio.h>
int main(){
    int n;
    int rev=0;
    int r;
    scanf("%d",&n);
    while(n){
        r=n%10;
        rev=rev*10+r;
        n/=10; 
    }
    printf("%d",rev);
}