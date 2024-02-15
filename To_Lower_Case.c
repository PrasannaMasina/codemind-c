#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] >= 65 && str[i] <= 96)
        str[i]+=32;
    }
    printf("%s",str);
}