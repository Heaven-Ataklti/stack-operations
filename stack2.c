#include<stdlib.h>
#include<stdio.h>
#define size 100
struct stack{
	int top;
	int stackarr[size];	
};
typedef struct stack Node;
	Node ps;
void push();
void pop();
void display();
void search();


int main(){
	int choice;

	ps.top=-1;
	while(1){
	
		printf("\n\t\tChoose Your operation\n");
	   printf("\t\t----------------------------\n");
	    printf("\t\t----------------------------\n");
		printf("\t\t1,Push an element to stack\n");
		printf("\t\t2,POP an element from the stack\n");
		printf("\t\t3,Search an element\n");
		printf("\t\t4,Exit\n");
		printf("\t\t Enter your choice\t");
		scanf("%d",&choice);
		switch(choice){
		case 1:
		      push();
			  display();
				break;
	    case 2:
	     pop();
	    	display();
	    	break;
		case 3:
			search();
			break;
	case 4:
		exit(0);
		break;
    default:
		printf("No more option\n");	
	    }
	}
}
void push(){
	int item;
	if(ps.top==size-1){
		printf("\n\t\tStack Overflow");
	}
	else{
		printf("\n\t\tEnter The Element To Be Inserted =\t");
    scanf("%d",&item);
    ps.stackarr[++ps.top]=item;
	}
}
void pop(){
	int item;
	if(ps.top==-1){
		printf("\n\t\tstack underflow");
		
	}
	else{
    item=ps.stackarr[ps.top--];
	}
}
void search(){
	int i;
	int item;
	printf("\n\t\t Enter an element to search\t");
	scanf("%d",&item);
	if(ps.top==-1){
			printf("\n\t\tstack empty");
	}
	else if(ps.top!=-1){
		
	 for(i=ps.top; i>=0; i--)
	  {
	  	if(ps.stackarr[i]==item){
	  		printf("\n\t\t The elment %d is found at position=%d",ps.stackarr[i],i+1);
	  	}
	  	else{
	  		printf("\t\t There is no an element");
	  	}
	  }
	}
}
void display(){
	int i;
		printf("\n\t\t The stack elements\n");
	if(ps.top==-1){
		printf("\n\t\tstack is empty");
	}
	else{
	
		for(i=ps.top; i>=0; i--)
		printf ("\n\t\t%d",ps.stackarr[i]);
	}
	
}

