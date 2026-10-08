#include<stdio.h>

void display(int *stack, int*top){
	if(*top==-1){
		printf("Stack underflow\n");
		return;
	}
	printf("Stack elements : \n");
	for(int i=*top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}
void push(int *stack, int *top,int n){
	if(*top==n-1){
		printf("Stack overflow\n");
		return;
	}
	int value;
	printf("Enter element to be pushed : ");
	scanf("%d",&value);
	(*top)++;
	stack[*top]=value;
	display(stack,top);
}

void pop(int *stack, int*top){
	if(*top==-1){
		printf("Stack underflow\n");
		return;
	}
	printf("%d is popped\n",stack[*top]);
	(*top)--;
	display(stack,top);
}

void main(){
	 int n,top=-1,ch;
	 printf("Enter size of the stack : ");
	 scanf("%d",&n);
	 int stack[n];
	 do{
	 	printf("\n1. Push \n2. Pop \n3. Display \n4. Exit \nEnter your choice : ");
	 	scanf("%d",&ch);
	 	switch(ch){
	 		case 1:
	 		push(stack,&top,n);
	 		break;
	 		case 2:
	 		pop(stack,&top);
	 		break;
	 		case 3:
	 		display(stack,&top);
	 		break;
	 		case 4:
	 		break;
	 		default:
	 			printf("Invalid choice\n");
	 	}
	 }while(ch!=4);
}
