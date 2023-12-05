#include<stdio.h>
int main()
{
    int n,r=0,lar=0;
    scanf("%d",&n);
    while(n!=0){
       lar=n%10;  
       if(lar>=r){
           r=lar;  
       }
       n/=10;
    }
    printf("%d",r);
}