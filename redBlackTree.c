#include<stdio.h>
#include<stdlib.h>


#define Red 1
#define Black 0
struct Node{
	int data,color;
	struct Node *left,*right,*parent;
};
strcut Node *root=NULL;
struct Node* createnewnode(int data){
	strcut Node *n=malloc(sizeof(strcut Node));
	n->data=data;
	n->color=Red;
	m->left=n->right=n->parent=NULL;
	 return n;
	 
}

void insert(int data){
	struct Node *newnode=createnode(data);
	struct Node *currentnode=root;
	struct Node *parentnode=NULL;
	
	while(currentnode!=NULL){
		parentnode=currentnode;
		if(data<currentnode->data){
			currentnopde=currentnode->left;
		}
		else if(data>currentnode->data){
			currentnopde=currentnode->right;
		}
		else{
			free(newnode);
			print("Duplicate Value!");
			return;
		}
	}
	
	newnode->parent=parentnode;
	if(parentnode==NULL){
		root=newnode;
	}
	
}

void main(){
	int choice, value;
	while(true){
		printf("\nEnter ypur choice \n1. Insert \n2. Delete \n3. Search \n4. Inorder Traversal \n5. Exit");
		scanf("%d",$choice);
		switch(choice){
			case 1:
				printf("Enter value to be inserted : ");
				scanf("%d",&value);
				insert(value);
				break;
			case 2:
				printf("Enter the value to be inserted : ");
				scanf("%d",&value);
				delete(value);
				break;
			case 3:
				printf("Enter the value to be searched : ");
				scanf("%d",&value);
				search(value);
				break;
			case 4:
				inorder();
				break;
			case 5:
				break;
			default:
				printf("Invalid Choice !");
			
		
		}
	}
}
