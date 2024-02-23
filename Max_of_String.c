#include<stdio.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    char max = str[0];
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] > max) max = str[i];
    }
    printf("%c",max);
}