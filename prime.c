#include <stdio.h>
void main(){
	int a,f=0;
	printf("Enter a number");
	scanf("%d",&a);
	for(int i=2;i<a;i++){
		if(a%i==0){
			f=1;
			break;
		}
	}
	if(f==1){
		printf("%d is not a prime number",a);
	}
	else{
		printf("%d is a prime number",a);
	}
}

