#include<stdio.h>
int main()
{
	int n1,n2,r1,r2;
	scanf("%d%d",&n1,&n2);
	int i=1;
	int sum1=0,sum2=0;
    while(i<n1 && i<n2){
    	if(n1%i==0){
    		sum1+=i;
		}
		if(n2%i==0){
			sum2+=i;
		}
		i++;
	}
	if(sum1==n2 && sum2==n1){
		printf("Amicable");
	}
	else{
		printf("Not Amicable");
	}
}