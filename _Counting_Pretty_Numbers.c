#include<stdio.h>
int main()
{
    int n,n1,n2,r,count;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){
        scanf("%d %d
",&n1,&n2);
        count=0;
        for(int j = n1 ; j <= n2 ; j++){
            r=j%10;
            if(r == 2 || r == 3 || r == 9)
            count++;
        }
        printf("%d
",count);
    }
}