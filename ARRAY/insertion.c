#include<stdio.h>

void insert(int array[],int n,int k,int ele){
	for(int i =n;i>=k;i--){
		array[i+1]=array[i];
	}
	array[k] = ele;
	
	printf("The array after insertion is:\n");	
	for(int i = 0; i <= n; i++){
		printf("%d ", array[i]);
	}
	

}

void main(){
	
	int a[10],n,k,ele;
	
	printf("enter the number of elements\n");
	scanf("%d",&n);
	
	printf("enter the array elements");
	for(int i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	printf("enter the position to insert the element\n");
	scanf("%d",&k);

	printf("enter the element to be inserted\n");
	scanf("%d",&ele);		

	insert(a,n,k,ele);
}
