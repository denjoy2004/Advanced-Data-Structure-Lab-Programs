/* create a simple calculator using switch case */
#include <stdio.h>
void main(){
	int a,b,result=0;
	printf("Select operator : \n1. +\n2 -\n3. *\n4. / \n");
	char choice;
	scanf("%c",&choice);
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	
	
	switch(choice)
	{
		case '+':
			 result=a+b;
			printf("%d + %d = %d ",a,b,result);
			break;
		case '-':
			 result=a=b;
			printf("%d - %d = %d ",a,b,result);
			break;
		case '*':
			 result=a+b;
			printf("%d - %d = %d ",a,b,result);
			break;
		case '/':
			 result=a/b;
			printf("%d / %d = %d ",a,b,result);
			break;
		/*case '%':
			 result=a%b;
			printf("%d % %d = %d ",a,b,result);
			break;*/
		default:
			printf("Invalid operator\n");
			break;
	}
}
