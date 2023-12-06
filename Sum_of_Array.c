#include<stdio.h>
int main(int argc, char *argv[])
{
		int n,sum=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
		for(int i=0;i<n;i++){
			printf("%d",sum);
		    break;
		}
}