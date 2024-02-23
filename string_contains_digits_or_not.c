#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n > 0){
        char str[1001];
        scanf("%s",str);
        int flag = 0;
        for(int i = 0 ; str[i] != NULL ; i++){
            if(str[i] >= '0' && str[i] <= '9'){
                printf("Yes
");
                flag = 1;
                break;
            }
            else
            flag = 0;
        }
        if(flag == 0) printf("No
");
        n--;
    }
}