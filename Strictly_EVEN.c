#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    scanf("%d",&arr[i]);
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] % 2 == 0){
            if(i % 2 == 0) flag = 1;
            else{
                flag = 0;
                break;
            }
        }
    }
    if(flag == 1) printf("True");
    else printf("False");
}