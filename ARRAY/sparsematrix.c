#include<stdio.h>


void main(){
   int sparse[4][5] = {{0,0,3,0,4},{0,0,5,7,0},{0,0,0,0,0},{0,2,6,0,0}},size = 0;
   
   
   for(int i=0;i<4;i++){
        for(int j =0;j<5;j++){
            if(sparse[i][j]!=0)
                size++;
        }
    }
    int **compact = (int **)malloc(3 * sizeof(int *));
    for (int i = 0; i < 3; i++) {
        compact[i] = (int *)malloc(size * sizeof(int));
    }
    int k =0;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<5;j++){
            if(sparse[i][j]!=0){
                compact[0][k] = i;
                compact[1][k] = j;
                compact[2][k] = sparse[i][j];
                k++;
            }
            
        }
    }
    printf("the new matrix is\n");
    
    for(int i =0;i<3;i++){
        for(int j = 0;j<size;j++){
            printf("%d ", compact[i][j]);
        }
        printf("\n");
    }

    // Free allocated memory
    for (int i = 0; i < 3; i++) {
        free(compact[i]);
    }
    free(compact);
}
