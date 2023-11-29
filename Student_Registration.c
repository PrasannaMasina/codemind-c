#include<stdio.h>
int main()
{
    int n,k,m,t;
    scanf("%d",&t);
    while(t>0){
        scanf("%d %d %d",&n,&m,&k);
        if(m-k>=n){
            printf("YES
");
        }
        else{
            printf("NO
");
        }
        t--;
    }
}