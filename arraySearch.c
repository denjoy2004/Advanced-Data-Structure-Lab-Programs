#include<stdio.h>
void main(){
	int n,k,flag=0;
	printf("Enter the limit of the array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the numbers ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&k);
	for(int i=0;i<n;i++){
		if(k==a[i]){
			printf("%d is at the %d postion",k,i);
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("%d is not a member of the array",k);
	}
}
