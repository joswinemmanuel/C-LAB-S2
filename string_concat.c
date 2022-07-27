#include <stdio.h>
#include <string.h>

int main(){
    int j;
    char s1[50], s2[50];
    printf("Enter the first string : ");
    scanf("%s", s1);
    printf("Enter the second string : ");
    scanf("%s", s2);
    
    j = strlen(s1);
    for(int i=0; s2[i] != '\0'; i++){
        s1[j+i] = s2[i];
    }
    
    printf("Concatenated string : %s", s1);
    return 0;
}
