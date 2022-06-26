#include <stdio.h>

int main(){
    int matrix[10][10],length,trace=0;
    printf("Enter the number of columns and rows of the square matrix : ");
    scanf("%d",&length);
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            printf("Enter the value of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(i==j){
                trace+=matrix[i][j];
            }
        }
    }
    printf("The trace of the matrix is : %d ",trace);
}
