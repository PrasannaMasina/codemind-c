#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum = 0;
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
        sum +=arr[i];
    }
    int avg = sum/n;
    int cnt = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] <= avg) cnt++;
    }
    printf("%d",cnt);
}