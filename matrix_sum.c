#include <stdio.h>
//to find the sum matrix
int main(){
	int m,n;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr1[m][n],arr2[m][n],arr_sum[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the value of arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
			printf("Enter the value of arr2[%d][%d] : ",i,j);
			scanf("%d",&arr2[i][j]);
			arr_sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}

	printf("The sum of matrix 1 and matrix 2 is :\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ",arr_sum[i][j]);
		}
		printf("\n");
	}

}
