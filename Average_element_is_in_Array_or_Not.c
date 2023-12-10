#include<stdio.h>
int main()
{
    int n;
    scanf("%d
",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d ",&arr[i]);
    }
    int avg=0;
    for(int i=0 ; i<n ; i++)
    {
        avg+=arr[i];
    }
    int flage=0;
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]==avg/n)
        flage=1;
    }
    if(flage==1)
    printf("True");
    else
    printf("False");
}