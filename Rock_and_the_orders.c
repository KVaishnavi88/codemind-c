#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3;
    scanf("%d%d%d%d%d%d%d%d",&d,&c,&a1,&a2,&a3,&b1,&b2,&b3);
    if(a1+a2+a3>=150&&b1+b2+b3>=150){
        if(a1+a2+a3+b1+b2+b3+c<a1+a2+a3+b1+b2+b3+d+d)
             printf("YES");
             else if(a1+a2+a3+b1+b2+b3+c>=a1+a2+a3+b1+b2+b3+d+d)
                printf("NO");
    }
    else if(a1+a2+a3>=150&&b1+b2+b3<150){
        if(a1+a2+a3+b1+b2+b3+c+d<a1+a2+a3+b1+b2+b3+d+d)
           printf("YES");
           else if(a1+a2+a3+b1+b2+b3+c+d>=a1+a2+a3+b1+b2+b3+d+d)
                printf("NO");
    }
    else if(a1+a2+a3<150&&b1+b2+b3>=150){
        if(a1+a2+a3+b1+b2+b3+d+c<a1+a2+a3+b1+b2+b3+d+d)
          printf("YES");
          else
           printf("NO");
    }
    else{
        printf("NO");}
}