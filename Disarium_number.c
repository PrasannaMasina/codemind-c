#include<stdio.h>
#include<math.h>
int main()
{
    int n;  //175
    scanf("%d",&n);
    int a=n;
    int num=n;
    int r=0,sum=0,digit=0;
     while(n){
         r=n%10;  //5 7 1 
         digit++;  //1 2 3
         n/=10;   //17 10 0
     }
     int rem=0;
     while(a){
         rem=a%10;  //5
         sum=sum+pow(rem,digit);
         digit-=1;
         a/=10;
     }
     if(sum==num){
         printf("True");
     }
     else{
         printf("False");
     }
}