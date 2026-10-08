#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
	
};
void insertAtEnd(struct Node **head){
	struct Node *newNode=malloc(sizeof(struct Node));
	int value;
	printf("Enter element to be enqued : ");
	scanf("%d",&value);
	newNode->data=value;
	newNode->next=NULL;
	if(*head==NULL){
		*head=newNode;
		return;
	}
	struct Node *temp=*head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
	
}
void deleteFromFront(struct Node **head){
	if(*head==NULL){
		printf("List is empty \n");
		return;
	}
	struct Node *temp=*head;
	*head=(*head)->next;
	
	free(temp);
}
void display(struct Node *head){
	if(head==NULL){
		printf("List is empty \n");
		return;
	}
	while(head!=NULL){
		printf("%d -> ",head->data);
		head=head->next;
	}
	printf("NULL\n");
}
void main(){
	struct Node *head=NULL;
	int ch;
	do{
	 	printf("\n1. Insert at end \n2. Delete \n3. Display \n4. Exit \nEnter your choice : ");
	 	scanf("%d",&ch);
	 	switch(ch){
	 		case 1:
	 		insertAtEnd(&head);
	 		break;
	 		case 2:
	 		deleteFromFront(&head);
	 		break;
	 		case 3:
	 		display(head);
	 		break;
	 		case 4:
	 		break;
	 		default:
	 			printf("Invalid choice\n");
	 	}
	 }while(ch!=4);
}
