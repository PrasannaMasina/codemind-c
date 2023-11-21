#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int a=num;
    int rev=0,rem=0;
    while(num>0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    if(rev==a){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
}