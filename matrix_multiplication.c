#include <stdio.h>

int main(){
	int m,n,o;
    int arr1[10][10],arr2[10][10],arr_mul[10][10];
	printf("Enter the number of rows of matrix 1 : ");
	scanf("%d",&m);
	printf("Enter the number of columns of matrix 1 and number of rows of matrix 2 : ");
	scanf("%d",&n);
    printf("Enter the number of columns of matrix 2 : ");
    scanf("%d",&o);

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

    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            arr_mul[i][j]=0;
            for(int p=0;p<n;p++){
                arr_mul[i][j]+=arr1[i][p]*arr2[p][j];
            }
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            printf("%d ",arr_mul[i][j]);
        }
        printf("\n");
    }

}