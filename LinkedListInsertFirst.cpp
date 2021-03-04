#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	Node* link;
};
struct Node* head;
void Insert(int x)
    {
	   	Node* temp=head;
		Node* temp1=(Node*)malloc(sizeof(struct Node));
		
		if(temp==NULL){
			temp1->data=x;
			temp1->link=NULL;
			head=temp1;
		}
		
	
else {  
        while(temp->link!=NULL)
        {
        	temp=temp->link;
		}
		
		
		temp->link=temp1;
		temp1->data=x;
		temp1->link=NULL;
			
		}
	

}

void Print() {
	Node* temp=head;
	printf("The List is : \n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
    }
    printf("\n");
}
int main()
{
	head=NULL;
	
	  {
	    int i,x,n;
	    printf("Enter the number of elements to be inserted\n");
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	    	printf("Enter element %d : ",(i+1));
	    	scanf("%d",&x);
	    	Insert(x);
	    	
		}
		Print();
		return 0;
	}

		
	}
