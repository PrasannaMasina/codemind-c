#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%s
%s",s1,s2);
    int flag = 0;
    for(int i = 0 ; s1[i]!=NULL && s2[i]!=NULL ; i++){
        if(s1[i] == s2[i]) flag = 1;
        else{
            flag = 0 ;
            break;
        }
    }
    if(flag == 1){
        printf("Strings are Equal");
    }
    else{
        printf("Strings are not Equal");
    }
}