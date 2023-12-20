#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    do
    {
        scanf("%d
",&n);
        if(n == -1) break;
        printf("%d
",n*n);
    }
    while(n!=-1);
}