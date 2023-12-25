#include<stdio.h>
int main(){
    int i,c=0;
    char str[101];
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]>=97&&str[i]<=122) c++;
        }
        printf("%d",c);
}