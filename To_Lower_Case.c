#include<stdio.h>
int main(){
    char str[101];
    int i,c=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]>=65&&str[i]<=90)
        str[i]+=32;}
        printf("%s",str);
}