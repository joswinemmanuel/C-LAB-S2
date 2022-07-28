#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    int num;
    char data[50] = "\nThis is a new world";    
    fp = fopen("file_demo.txt", "w");

    fputc('a', fp);

    fputs("\nJoswin Emmanuel", fp);

    for(int i=0; i<strlen(data); i++){
        fputc(data[i], fp);
    }    

    fprintf(fp, "\n%d %c %s\n", 1, 'a', "joswin");

    printf("Enter a string : ");
    scanf("%s", data);
    fputs(data, fp);
    printf("Enter a number : ");
    scanf("%d", &num);
    fprintf(fp, " %d", num);
}