#include <stdio.h>

int main(){
    FILE *fp;
    char result;
    fp = fopen("file_Student_data.txt", "r");
    while((result = fgetc(fp)) != EOF){
        printf("%c", result);
    }
}