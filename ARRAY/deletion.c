#include<stdio.h>

void delete(int array[],int n,int k){
    
    for(int i=k;i<n;i++){
        array[i]=array[i+1];
    }
    n--;
    
    printf("array after deletion\n");
    
    for(int i =0;i<n;i++){ printf("%d",array[i]);}
}
void main(){
    int a[10],n,k;
    
    printf("enter the number of elements\n");
    scanf("%d",&n);
    
    printf("enter the elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the position to be deleted\n");
    scanf("%d",&k);
    delete(a,n,k);
}