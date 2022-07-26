#include <stdio.h>

int main(){
    FILE *fp, *fp1, *fp2;
    fp = fopen("file_ex_natural_nums.txt", "w");
    int n, num;
    printf("Enter the number of numbers : ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        putw(num, fp);
    }
    fclose(fp);

    fp = fopen("file_ex_natural_nums.txt", "r");
    fp1 = fopen("file_ex_even_nums.txt", "w");
    fp2 = fopen("file_ex_odd_nums.txt", "w");

    while((num = getw(fp)) != EOF){
        if(num % 2 == 0){
            putw(num, fp1);
        } else {
            putw(num, fp2);
        }
    }
    fclose(fp);
    fclose(fp1);
    fclose(fp2);

    fp1 = fopen("file_ex_even_nums.txt", "r");
    printf("EVEN : ");
    while((num = getw(fp1)) != EOF){
        printf("%d ", num);
    }
    fclose(fp1);

    fp2 = fopen("file_ex_odd_nums.txt", "r");
    printf("\nODD : ");
    while((num = getw(fp2)) != EOF){
        printf("%d ", num);
    }
    fclose(fp2);
}