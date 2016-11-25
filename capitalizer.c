#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	
	FILE *fp = fopen("poem.txt", "w");
	char a;	
	int test = -1;
	while ((a = fgetc(fp)) != EOF) {
		if (test == -1){
			a = toupper(a);
			test = 0;
		}
		if (a == ' ')
			test++;
		if ( test == 2)
			test = -1;
		if (a == '\n'){
			test = -1;
		}

		fseek(fp, -1, SEEK_CUR);
		fprintf(fp,"%c",a);

	}
	fclose(fp);
	return 0;	
}	
