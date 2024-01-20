#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int cnt = 1 ;
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] == ' ')
        cnt++;
    }
    printf("%d",cnt);
}