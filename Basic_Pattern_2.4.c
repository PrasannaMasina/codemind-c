#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = n ; i > 0 ; i--){ //5
        for(int j = i ; j <= n ; j++){//5 4
            printf("%d ",j);//5
        }
        printf("
");
    }
}