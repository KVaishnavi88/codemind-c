#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int pp=n;
    int np=n;
    while(1)
    {
       int fc=0;
        for(int i=1;i<=pp;i++)
        {
            if(pp%i==0) fc++;
        }
        if(fc==2)
        {
            break;
        }
        else{
            pp--;
        }
    }
    while(1){
        int fc=0;
        for(int i=1;i<=np;i++){
            if(np%i==0) fc++;
        }
        if(fc==2){
            break;
        }
        else{
            np++;
        }
    }
    int d1=np-n;
    int d2=n-pp;
    printf("%d",d1<d2?d1:d2);
}