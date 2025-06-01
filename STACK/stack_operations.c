#include<stdio.h>

int isfull(int stack[],int top){
    if(top==99){return 1;}
    return 0;
}

void push(int stack[],int ele,int *top){
    *top = *top+1;
    stack[*top] = ele;
}

int peek(int stack[],int top){
    return stack[top];
}

int isempty(int *top){
    if(*top==-1){return 1;}
    return 0;
}

void pop(int stack[],int *top){
    if(!isempty(&top)){
        printf("the item deleted is %d\n",stack[*top]);
    } else {
        printf("the stack is empty\n");
        return;
    }
    *top = *top-1;
}

void main(){
    int stack[100],top=-1,n;
    char ch;

    printf("enter the number of elemnts\n");
    scanf("%d",&n);

    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        if(!isfull(stack,top)){
            scanf("%d",&stack[i]);
            push(stack,stack[i],&top);
        }
    }

    printf("the top element in the stack is %d\n",peek(stack,top));
    printf("the elements in the stack are\n");
    for(int i=0;i<=top;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");
    fflush(stdin);
    printf("the item delete?\n");
    scanf("%c",&ch);
    if(ch == 'y' || ch == 'Y'){
        pop(stack,&top);
        printf("the top element in the stack is %d\n",peek(stack,top));
        printf("the elements in the stack are\n");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
    } else {
        printf("no item deleted\n");
    }



}