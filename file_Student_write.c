#include <stdio.h>

int main(){
	FILE *fp;
	fp = fopen("file_Student_data.txt", "w");
	char name[50];
	int mark, no_of_entry;
	printf("Enter the number of students : ");
	scanf("%d", &no_of_entry);
	for(int i=1; i<=no_of_entry; i++){
		printf("Enter the student %d name : ", i);
		scanf("%s : ", name);
		fprintf(fp, "%s", name);
		printf("Enter the student %d mark : ", i);
		scanf("%d", &mark);
		fprintf(fp, "%d", mark);
	}
	fclose(fp);
	return 0;
	
}
