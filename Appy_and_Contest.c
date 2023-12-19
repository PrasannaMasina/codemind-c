#include<stdio.h>
int main()
{
    int ts,n,a,b,k,count;
    scanf("%d",&ts);
    for(int i = 1 ; i <= ts ; i++){
        count = 0;
        scanf("%d %d %d %d
",&n,&a,&b,&k);
        for(int j = 1 ; j <= n ; j++){
            if(j%a == 0 && j%b != 0){
                count++;
            }
            else if(j%b == 0 && j%a != 0){
                count++;
            }
        }
        if(count >= k)
        printf("Win
");
        else
        printf("Lose
");
   }
}