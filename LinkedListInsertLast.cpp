#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	Node* link;
};
struct Node* head;
void Insert(int x,int n)
    {
	   	Node* temp=head;
		Node* temp1=(Node*)malloc(sizeof(struct Node));
		temp1->data=x;
	    temp1->link=NULL;
	    if(temp==NULL|| n==1){
	    	temp1->link=temp;
	    	head=temp1;
		}
	    
  else   {
  
        for(int i=0;i<n-2;i++)
        {
        	temp=temp->link;
		}
		temp1->link=temp->link;
		temp->link=temp1;
			
		}
	

}
struct Node* Delete(int n){
	
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
	   /* printf("Enter the number of elements to be inserted\n");
	    scanf("%d",&n);
	    for(i=0;i<n;i++){
	    	printf("Enter element %d : ",(i+1));
	    	scanf("%d",&x);*/
	    	Insert(1,1);
	    	Insert(2,2);
	    	Insert(3,3);
	        Insert(4,1);
	        Insert(5,1);
	    	
	    	
	    	
		}
		Print();
		return 0;
	}

		
	
