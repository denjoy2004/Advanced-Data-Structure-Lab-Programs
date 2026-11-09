#include <stdio.h>
#include <stdlib.h>
void main(){
printf("Enter number of elements in universal set: ");
	int an;scanf("%d",&an);
	printf("Enter number of elements in array : ");
	int n;
	scanf("%d",&n);
	int A[an],a[n],b[n],abit[n],bbit[n];
	
	printf("Enter elements of universal set : ");
	for(int i=0;i<an;i++){
		scanf("%d",&A[i]);
	}   
	
	printf("Entter elements pg array A : ");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	printf("Enter elements of array B: ");
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	
	
	printf("\nElements present in the universal set ");
	for(int i=0;i<an;i++){
		printf("%d \t",A[i]);
	}  
	
	printf("\nElements present in the array A");
	for(int i=0;i<n;i++){
		printf("%d \t",a[i]);
	}
	
	printf("\nElements present in the array B");
	for(int i=0;i<n;i++){
		printf("%d \t",b[i]);
	}
	
	for(int i=0;i<n;i++){
		if(A[i]==a[i]){
			abit[i]=1;
		}
		else{
			abit[i]=0;
		}
	}
	printf("\nBit string representatioin of Set A");
	for(int i=0;i<n;i++){
		printf("%d \t",abit[i]);
	}
}
