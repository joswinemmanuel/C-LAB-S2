#include <stdio.h>
int main() {
	FILE *fp;
	fp = fopen("file_demo.txt", "w");
	fprintf(fp, "%d %d %d", 1, 2, 3);
	fprintf(fp, "%s", "\nJoswin's gonna make it");
	return 0;
}
