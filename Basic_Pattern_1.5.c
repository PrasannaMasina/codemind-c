#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ;i++){
        char c='A';
        for(int j=1 ; j<=n ; j++){
            printf("%c ",c+i);
        }
        printf("
");
    }
}