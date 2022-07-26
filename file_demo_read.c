#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file_demo.txt", "r");
    int a, b, c;
    char result; //re[10];
    fscanf(fp, "%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);
    while((result = fgetc(fp)) != EOF){
        printf("%c", result);
    }
    // fgets(re, 5, fp);
    // printf("%s", re);
    fclose(fp);
}
