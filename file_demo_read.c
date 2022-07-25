#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("file_demo.txt", "r");
	int a, b, c;
	char ch;
	fscanf(fp, "%d %d %d", &a, &b, &c);
	printf("%d %d %d", a, b, c);
	
	while(1){
		ch = fgetc(fp); //Each character of the file is read and stored in the character file.  
		if(ch==EOF)
			break;
		printf("%c", ch);
		}
	fclose(fp);
	return 0;
}
