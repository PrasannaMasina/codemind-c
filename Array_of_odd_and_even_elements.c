#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int a = 0;
    int res[n];
    for(int i = 0 ; i < n ; i++){
    scanf("%d",&arr[i]);
    if(arr[i] %2 != 0){
      res[a] = arr[i];
      a++;
      }
    }
    for(int i = 0 ; i < n ; i++){
        if(arr[i] %2 == 0){
          res[a] = arr[i];
          a++;
        }
        printf("%d ",res[i]);
    }
}