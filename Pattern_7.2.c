#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a = n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j < i ; j++){
            printf(" ");
        }
        for(int k = n ; k >= i ; k--){
            printf("%d ",a);
        }
        a-=1;
        printf("
");
    }
}