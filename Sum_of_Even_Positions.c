#include<stdio.h>
int main(int argc, char *argv[])
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);}
		int sum=0;
		for(int i=0;i<n;i+=2){
		 //if(arr[i]%2!=0)
		 sum+=arr[i];
		}
		printf("%d",sum);
}