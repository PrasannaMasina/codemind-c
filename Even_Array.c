#include<stdio.h>
int even_array(int n){
    if(n%2==0) return 1;
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        scanf("%d",&arr[i]);
    }
    int flag = 0;
    for(int i = 0 ; i < n ; i++){
        if(even_array(arr[i])) flag = 1;
        else {
            flag = 0;
            break;
        }
    }
    if(flag == 1) printf("True");
    else printf("False");
}