#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp = n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = i ; j < n ; j++){
            printf(" ");
        }
        for(int k = 1 ; k <= i ; k++)
        printf("%d ",temp);
        temp--;
        printf("
");
    }
}