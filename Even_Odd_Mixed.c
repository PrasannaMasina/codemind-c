#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int r = 0;
    int evencnt = 0 , oddcnt = 0;
    while(n)
    {
      r = n%10;
      if(r%2 == 0)
      evencnt++;
      else
      oddcnt++;
      n/=10;
    }
    if(evencnt > 0 && oddcnt == 0) printf("Even");
    else if(oddcnt > 0 && evencnt == 0) printf("Odd");
    else printf("Mixed");
}