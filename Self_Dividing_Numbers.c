#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2;
    scanf("%d
%d",&n1,&n2);
    for(int i=n1 ; i<=n2 ; i++){  //1
        int a=i,r=0,flage=0; //1
        while(a){
        r=a%10;//1
        if(r==0) break;
        if(i%r!=0) {
            flage = 0;
            break;
        }
        if(i%r==0) flage=1;
        a/=10;
        }
        if(flage==1)
            printf("%d ",i);
    }
}