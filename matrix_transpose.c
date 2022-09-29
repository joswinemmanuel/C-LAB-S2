#include <stdio.h>
// Transpose
int main(){
	int m,n;
	printf("Enter the number of rows : ");
	scanf("%d",&m);
	printf("Enter the number of columns : ");
	scanf("%d",&n);
	int arr[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the value of arr1[%d][%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
