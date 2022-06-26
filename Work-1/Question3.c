int main() {
    char string[50];
    printf("Enter the string : ");
    gets(string);
    int full=strlen(string),half=full/2,pal=1;
    for(int i=0;i<half;i++){
        if(string[i]!=string[full-1-i]){
            pal=0;
            break;
        }
    }
    if(pal){
        printf("%s is a palindrome",string);
    } else {
        printf("%s is not a palindrome",string);
    }
    return 0;
}
