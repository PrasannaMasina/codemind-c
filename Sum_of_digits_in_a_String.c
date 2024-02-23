#include<stdio.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    int sum = 0;
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] >= '0' && str[i] <= '9')
        sum += (str[i] - '0');
    }
    printf("%d",sum);
}