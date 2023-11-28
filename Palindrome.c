#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=n;
    int rev=0,r;
    while(n){
       r=n%10;
       rev=rev*10+r;
       n/=10;
    }
    if(a==rev){
        printf("True");
    }
    else{
        printf("False");
    }
}