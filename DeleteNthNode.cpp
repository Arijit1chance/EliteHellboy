#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	Node* link;
};
struct Node* head;
Insert(int x){
	Node* temp=(Node*)malloc(sizeof(Node));
	temp->data=x;
	temp->link=head;
	if(head==NULL)
	{
		head=temp;
	}
	
	else
	{
		Node* temp1=head;
		while(temp1->link!=NULL){
		
		temp1=temp1->link;
	}
		temp1->link=temp;
		
	}
}
Print(){
	Node* temp=head;
	while(temp!=NULL){
	
	printf("data : %d",temp->data);
	temp=temp->link;
}
}
int main()
{
	head=NULL;
	Insert(2);
    Insert(2);
	Insert(2);
	Insert(2);
	Insert(2);	
	Print();
}
