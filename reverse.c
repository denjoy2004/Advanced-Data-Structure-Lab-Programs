/* find the reverse of a number and add 10 to the result*/
#include <stdio.h>
void main(){
	int n,a,f=0,num=0,rev=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	a=n;
	while(n>0)
	{
		num=n%10;
		rev=rev*10+num;
		n=n/10;
	}
	
	int s=rev+10;
	printf("Reverse of %d is %d \n",a,rev);
	printf("Reverse + 10 = %d\n",s);

}
