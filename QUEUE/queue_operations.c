#include<stdio.h>

int isfull(int *rear){
    return *rear==99;
}

void enqueue(int queue[],int ele,int *rear){
    *rear= *rear+1;
    queue[*rear]=ele;
}

int isempty(int *front,int *rear){
    if(*front<0||*front>*rear){
        return 1;
    }
    else{
        return 0;
    }
}

void dequeue(int *front){
    *front = *front+1;
}

int peek(int queue[],int *front){
    return queue[*front];
}

void print_queue(int queue[],int *front,int*rear){
    for(int i = *front;i <=*rear;i++){
        printf("%d",queue[i]);
    }
    printf("\n");
}


void main(){
    int queue[100],front = 0,rear = -1,n;

    printf("enter the number of elements\n");
    scanf("%d",&n);

    printf("enter the elements\n");

    for(int i=0;i<n;i++){
        if(!isfull(&rear)){
            scanf("%d",&queue[i]);
            enqueue(queue,queue[i],&rear);
        }
        else{
            printf("the queue is full\n");
        }
    }

    printf("the first element in the queue is %d\n",peek(queue,&front));

    fflush(stdin);
    char ch;
    printf("dequeue?");
    
    scanf("%c",&ch);
    if(ch=='y'){
        if(!isempty(&front,&rear)){
            dequeue(&front);
            printf("the updated queue starts from %d\n",peek(queue,&front));
        }
        
    }
    
    print_queue(queue,&front,&rear);
}