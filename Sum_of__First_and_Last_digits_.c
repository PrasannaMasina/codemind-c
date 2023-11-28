#include<stdio.h>
int main()
{
    int n,r;
    scanf("%d",&n);
    int last_digit=n%10;
    while(n!=0){
        r=n%10;
        n/=10;
    }
    int first_digit=r;
    printf("%d",first_digit+last_digit);
}