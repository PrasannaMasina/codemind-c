#include<stdio.h>
int main()
{
    char str[1000];
    scanf("%[^
]s",str);
    int count = 0 ;
    for(int i = 0 ; str[i] != NULL ; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
        count++;
    }
    printf("%d",count);
}