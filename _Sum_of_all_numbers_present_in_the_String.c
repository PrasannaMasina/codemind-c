#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    int sum = 0;
    int n = strlen(str);
    for(int i = 0 ; i < n ; i++){
        if(str[i] >= '0' && str[i] <= '9')
        sum += str[i] - '0';
    }
    printf("%d",sum);
}