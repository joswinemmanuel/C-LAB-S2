#include <stdio.h>

int main() {
    char string[50],character;
    int count=0;
    printf("Enter the string : ");
    gets(string);
    printf("Enter the character to find count of : ");
    character=getchar();
    for(int i=0;string[i]!='\0';i++){
        if(string[i]==character){
            count++;
        }
    }
    printf("The count of '%c' is %d",character,count);
    return 0;
}
