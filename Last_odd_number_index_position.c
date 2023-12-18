#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d ",&arr[i]);
    }
    int index;
    for(int i=0 ; i<n ; i++){
        if(arr[i]%2!=0)
        index=i;
    }
    printf("%d",index);
}