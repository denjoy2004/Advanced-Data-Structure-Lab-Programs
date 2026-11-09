#include<stdio.h>
void main(){
	int a,b,c,sum,sub,div,mul;
	printf("Enter 2 numbers \n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	div=a/b;
	mul=a*b;
	
	printf("\n%d + %d = %d",a,b,sum);
	printf("\n%d - %d = %d",a,b,sub);
	printf("\n%d / %d = %d",a,b,div);
	printf("\n%d * %d = %d",a,b,mul);
}
