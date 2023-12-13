#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d %d %d",&a,&b,&x,&y);
    int sum=0;
    for(int i=a ; i<=b ; i++){
        if(i%x==0 && i%y!=0){
            sum+=i;
        }
    }
    printf("%d",sum);
}