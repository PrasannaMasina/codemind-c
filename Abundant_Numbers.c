#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i=1;
    int a=n;
    while(i<n){
        if(n%i==0){
            sum+=i;
        }
        i++;
    }
    if(sum>a){
        printf("True");
    }
    else{
        printf("False");
    }
}