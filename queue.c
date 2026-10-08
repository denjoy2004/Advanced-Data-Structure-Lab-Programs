#include<stdio.h>
void display(int *queue, int*front,int *rear, int n){
	if(*front ==-1){
		printf("Queue is empty\n");
		return;
	}
	printf("Elements in queue :\n");
	for (int i=*front;i<=*rear;i++){
		printf("%d\n",queue[i]);
	}
}
void enque(int *queue, int*front,int *rear, int n){
	if(*rear ==n-1){
		printf("Queue overflow\n");
		return;
	}
	int value;
	printf("Enter element to be enqued : ");
	scanf("%d",&value);
	if(*front==-1){
		*front=0;
	}
	(*rear)++;
	queue[*rear]=value;
	display(queue,front,rear,n);
}

void deque(int *queue, int*front,int *rear, int n){
	if(*front ==-1){
		printf("Queue is empty\n");
		return;
	}
	printf("%d dequed ",queue[*front]);
	if(*front==*rear){
		*front=*rear=-1;
	}
	else{
		(*front)++;
	}
	display(queue,front,rear,n);
}
void main(){
	 int n,front=0,rear=-1,ch;
	 printf("Enter size of the queue : ");
	 scanf("%d",&n);
	 int queue[n];
	 do{
	 	printf("\n1. Enque \n2. Deque \n3. Display \n4. Exit \nEnter your choice : ");
	 	scanf("%d",&ch);
	 	switch(ch){
	 		case 1:
	 		enque(queue,&front,&rear,n);
	 		break;
	 		case 2:
	 		deque(queue,&front,&rear,n);
	 		break;
	 		case 3:
	 		display(queue,&2front,&rear,n);
	 		break;
	 		case 4:
	 		break;
	 		default:
	 			printf("Invalid choice\n");
	 	}
	 }while(ch!=4);
}
