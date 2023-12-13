#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int sq_sum=0;
    for(int i=1 ; i<=n ; i++){
        sum+=i;
        sq_sum=sq_sum+(i*i);
    }
    int diff=(sum*sum)-sq_sum;
    printf("%d",diff);
}