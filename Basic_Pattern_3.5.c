#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
    char c='A';    
       for(int j=n ; j>i ; j--){
         printf("%c ",c);
         c++;
       }
       printf("
");
    }
}