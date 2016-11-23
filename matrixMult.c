#include <stdio.h>

int main() {
	int length1, length2, width1, width2;
	int i, j, k;
	int sum = 0;

	//asks for dimensions of matrix1
	printf("Insert matrix 1 dimensions separated by a space: ");
	scanf("%d %d", &length1, &width1);
	int matrix1 [length1][width1];
	
	//asks for dimensions of matrix2
	printf("Insert matrix 2 dimensions separated by a space: ");
	scanf("%d %d", &length2, &width2);
	int matrix2 [length2][width2];

	//asks for matrix 1 elements
	printf("Input matrix 1 elements separated by spaces: ");
	
	//scans matrix 1 elements into 2d array
	for ( i=0; i<length1; i++) {
		for ( j=0; j<width1; j++) {
			scanf("%d", &matrix1[i][j]);
		}
	}

	//asks for matrix 2 elements
	printf("Input matrix 2 elements separated by spaces: ");

	//scans matrix 2 elements into 2d array
	for ( i=0; i<length2; i++) {
		for (j=0; j<width2; j++) {
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	//initialize matrix 3
	int matrix3 [length1][width2];

	//matrix multiplication
	for (i=0; i<length1; i++) {
		for (j=0; j<length2; j++) {
			for (k=0; k<width2; k++) {
				sum = sum + matrix1[i][k]*matrix2[k][j];
			}
			matrix3[i][j] = sum;
			sum=0;
		}
	}

	//prints matrix 1
	printf("Matrix 1 is: \n");
	for ( i=0; i<length1; i++) {
		for ( j=0; j<width1; j++) {
			printf("%d \t", matrix1[i][j]);
		}
	printf("\n");
	}

	//prints matrix 2
	printf("Matrix 2 is: \n");
	for (i=0; i<length2; i++) {
		for (j=0; j<width2; j++) {
			printf("%d \t", matrix2[i][j]);
		}
	printf("\n");
	}


	//prints matrix 3
	printf("Multiplying matrix 1 and 2 produces: \n");
	for (i=0; i<length1; i++) {
		for (j=0; j<width2; j++) {
			printf("%d \t", matrix3[i][j]);
		}
	printf("\n");
	}

return 0;
}
