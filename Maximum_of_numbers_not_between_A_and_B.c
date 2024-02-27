#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);
    int a,b,max = -1;
    scanf("%d %d",&a,&b);
    for(int i = 0 ; i < n ; i++){
        if(arr[i] < a || arr[i] > b){
            if(arr[i] > max) max = arr[i];
        }
    }
    printf("%d",max);
}