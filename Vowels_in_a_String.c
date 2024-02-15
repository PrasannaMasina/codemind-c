#include<stdio.h>
#include<string.h>
int main()
{
    char str[1001],ch;
    scanf("%[^
] %c",str,&ch);
    int flag = 0,n = strlen(str);
    for(int i = 0 ; i < n ; i++){
        if(str[i] == ch){
            printf("True
%d",i);
            flag = 1;
            break;
        }
        else
        flag = 0;
    }
    if(flag == 0)
    printf("False");
}