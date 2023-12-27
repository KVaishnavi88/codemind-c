#include<stdio.h>
int main(){
    char str[101];
    int i,c=0;
    scanf("%[^
]",str);
    for(i=0;str[i]!=NULL;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        c++;
    }
    printf("%d",c);
}