#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1001],str2[1001];
    scanf("%[^
]s",str1);
    strcpy(str2,str1);
    printf("%s",str2);
}