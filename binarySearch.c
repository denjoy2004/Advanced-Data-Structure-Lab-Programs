#include<stdio.h>
void binarySearch(int a[], int n, int key){
	int low=0,high=n-1;
	while(low<=high){
		int mid =(low+high)/2;
		if(a[mid]==key){
			printf("%d found at position %d ",key,mid);
			return;
		}
		else if(a[mid]<key){
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}	
}
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
	binarySearch(a,n,k);
}
