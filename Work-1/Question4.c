#include <stdio.h>

int main(){
    int matrix[10][10],length,symmetric=1,start=1;
    printf("Enter the number of columns and rows of the square matrix : ");
    scanf("%d",&length);
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            printf("Enter the value of matrix[%d][%d] : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<length-1;i++){
        for(int j=start;j<length;j++){
            if(matrix[i][j]!=matrix[j][i]){
                symmetric=0;
                break;
            }
        }
        start++;
    }
    if(symmetric){
        printf("The matrix is symmetric");
    } else {
        printf("The matrix is not symmetric");
    }
}
