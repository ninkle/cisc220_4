#include <stdio.h>

int main() {
	int length1, width1;
	
	printf("Insert matrix 1 dimensions separated by a space: ");
	scanf("%d %d", &length1, &width1);
	int matrix1 [length1][width1];
	
	printf("Input matrix 1 elements separated by spaces: ");
	
	int i;
	int j;

	for ( i=0; i<length1; i++) {
		for ( j=0; j<width1; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}
	for ( i=0; i<length1; i++) {
		for ( j=0; j<width1; j++) {
			printf("%d \t", matrix1[i][j]);
		}
	printf("\n");
	}
return 0;
}
