#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001];
    scanf("%[^
]",str);
    int n = strlen(str);
    for(int i = n-1 ; i >= 0 ; i--){
        printf("%c",str[i]);
    }
}