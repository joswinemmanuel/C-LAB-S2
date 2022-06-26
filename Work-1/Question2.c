#include <stdio.h>

int main() {
    char string[50],lower;
    int count=0;
    printf("Enter the string : ");
    gets(string);
    for(int i=0;string[i]!='\0';i++){
        lower=tolower(string[i]);
        if(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
            count++;
        }
    }
    printf("The number of vowels : %d",count);
    return 0;
}
