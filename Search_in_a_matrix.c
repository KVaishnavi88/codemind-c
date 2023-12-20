#include<stdio.h>
int main(){
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&mat[i][j]);}
    }
    int a,dc=0;
    scanf("%d",&a);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a==mat[i][j]) dc++;
        }
    }
    if(dc>0) printf("1");
    else printf("0");
}