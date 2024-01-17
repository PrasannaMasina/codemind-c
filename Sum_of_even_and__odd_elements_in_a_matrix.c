#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int even_sum = 0 , odd_sum = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(arr[i][j]%2==0)
            even_sum+=arr[i][j];
            else
            odd_sum+=arr[i][j];
        }
    }
    printf("%d %d",even_sum,odd_sum);
}