#include <stdio.h>

int main(){
	int m,n,o;
	printf("Enter the number of rows of matrix 1 : ");
	scanf("%d",&m);
	printf("Enter the number of columns of matrix 1 and number of rows of matrix 2 : ");
	scanf("%d",&n);
    printf("Enter the number of columns of matrix 2 : ");
    scanf("%d",&o);
	int arr1[m][n],arr2[n][m],arr_mul[m][n];

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("Enter the value of arr1[%d][%d] : ",i,j);
			scanf("%d",&arr1[i][j]);
		}
	}

    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            printf("Enter the value of arr2[%d][%d] : ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }

    int ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            ans=0;
            for(int p=0;p<n;p++){
                ans+=arr1[i][p]*arr2[p][j];
            }
            printf("%d ",ans);
        }
        printf("\n");
    }

}