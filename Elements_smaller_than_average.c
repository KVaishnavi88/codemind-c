#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }int avg=sum/n;
    int dc=0;
    for(i=0;i<n;i++){
        if(avg>=arr[i]) dc++;
    }printf("%d",dc);
}