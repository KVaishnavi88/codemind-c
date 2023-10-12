#include<stdio.h>
int main()
{
    int e,p,m,s,cs;
    scanf("%d%d%d%d%d",&e,&p,&m,&s,&cs);
    if(e>34&&p>34&&m>34&&s>34&&cs>34){
        printf("PASSED");
    }
    else{
        printf("FAILED");}
}