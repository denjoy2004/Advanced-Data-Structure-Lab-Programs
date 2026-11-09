#include <stdio.h>
void main(){
	int a,b;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is greaterthan %d", a,b);
	}
	else if(a==b){
		printf("%d and %d is equal", a,b);
	}
	else{
		printf("%d is greaterthan %d",b,a);
	}
}
