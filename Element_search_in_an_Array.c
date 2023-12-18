#include<stdio.h>
int main()
{
    int n,a,flage=0;
    scanf("%d
",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d ",&arr[i]);
    }
    scanf("%d",&a);
    for(int i=0 ; i<n ; i++){
        if(arr[i]==a){
            flage=1;
            break;
        }
    }
    if(flage==1){
        printf("True");
    }
    else
    printf("False");
}