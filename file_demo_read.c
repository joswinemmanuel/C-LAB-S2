#include <stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file_demo.txt", "r");
    int a, b, c;
    char result;
    fscanf(fp, "%d %d %d", &a, &b, &c);
    printf("%d %d %d", a, b, c);
    while((result = fgetc(fp)) != EOF){
        printf("%c", result);
    }
    fclose(fp);
    return 0;
}
