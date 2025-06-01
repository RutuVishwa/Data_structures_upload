/*tasks
1.insertfirst
2.deletefirst
3.isempty
4.length
5.search 
6.sort
7.print*/

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node  *next;
}nodes;

nodes *head = NULL;

void insertfirst(int key){
    nodes *newnode = (nodes*)malloc(sizeof(nodes));

    newnode->data=key;
    newnode->next = head;
    head = newnode;
}

nodes* deletefirst(){
    nodes *temp = head;
    head = head->next;
    return temp;
}

int isempty(){
    return head==NULL;
}

int length(){
    int len = 0;
    struct node  *ptr = head;
    while(ptr!=NULL){
        len++;
        ptr = ptr->next;
    }
    return len;
}

void search(int key){
    struct node *ptr =head;
    while(ptr->next!=NULL){
        

        if(ptr->data == key){
            printf("element present");
            break;
        }
        ptr = ptr->next;
    }

    

}

void sort(){
    int i,j,k,tempdata;
    int size = length();
    k = size;

    nodes* current;
    nodes* next;
    for ( i = 0; i < size-1; i++,k--)
    {
        current = head;
        next = head->next;
        for(j=1;j<k;j++){
            if(current->data > next->data){
                tempdata = current->data;
                current->data = next->data;
                next->data = tempdata;
            }
        current = current->next;
        next = next->next;
        }
        
    }
    
}

void print_list(){
    nodes* ptr;
    printf("\n");
    for(ptr=head;ptr!=NULL;ptr=ptr->next){
        printf("%d",ptr->data);
    }
    printf("\n");
}

void main(){
    insertfirst(1);
    insertfirst(2);
    insertfirst(3);
    insertfirst(4);
    insertfirst(5);
    insertfirst(6);
    insertfirst(7);

    print_list();

    search(7);

    sort();
    print_list();

    while (!isempty())
    {
        nodes* deleted = deletefirst();
        printf("deleted element %d\n",deleted->data);
    }
    
    
}