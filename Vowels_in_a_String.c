#include<stdio.h>
int main(){
    char str[101];
    char ch;
    int i,c=0;
    scanf("%[^
]%s",&str,&ch);
    for(i=0;str[i]!=NULL;i++){
        if(ch==str[i]) { c++; printf("True
");
           printf("%d",i);  
            break;}
    }
    if(c==0){
    printf("False
");}
}