#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int m1[a][b];
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            scanf("%d",&m1[i][j]);
        }
    }
    int x,y;
    scanf("%d %d",&x,&y);
    int m2[x][y];
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j <y ; j++){
            scanf("%d",&m2[i][j]);
        }
    }
    int arr[a][b];
    for(int i = 0 ; i < a ; i++){
        for(int j = 0 ; j < b ; j++){
            arr[i][j]=m1[i][j]+m2[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("
");
    }
}