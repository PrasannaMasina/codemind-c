#include<stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int max,lcm=1;
    if(n1>n2) max=n1;
    else max=n2;
    while(1){
        if(max%n1==0 && max%n2==0){
        lcm*=max;
        printf("%d",lcm);
        break;
        }
        else
        max++;
    }
}