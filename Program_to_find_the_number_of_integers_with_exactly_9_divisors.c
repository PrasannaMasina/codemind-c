#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    int count,numcnt=0;
    for(int i = 1 ; i<=n ; i++){
        a=i;
        count=0;
        for(int j=1 ; j<=n ; j++){
            if(a%j==0) count++;
        }
        if(count==9){
            printf("%d ",a);
            numcnt++;
        }
    }
    printf("
Total=%d",numcnt);
}